#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

struct Edge
{
  int to;
  ll w;
  Edge(int to, ll w) : to(to), w(w) {}
};

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> A(N), B(M), C(M);

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  for (int i = 0; i < M; ++i)
  {
    cin >> B[i] >> C[i];
  }

  priority_queue<pair<ll, ll>> pq;

  for (int i = 0; i < N; ++i)
  {
    pq.push(make_pair(A[i], 1));
  }

  for (int i = 0; i < M; ++i)
  {
    pq.push(make_pair(C[i], B[i]));
  }

  ll ans = 0;
  for (int i = 0; i < N; ++i)
  {
    auto p = pq.top();
    pq.pop();

    ans += p.first;
    if (p.second > 1)
    {
      p.second--;
      pq.push(p);
    }
  }

  cout << ans << endl;
  return 0;
}