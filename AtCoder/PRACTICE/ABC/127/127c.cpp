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

  vector<int> L(M), R(M);

  for (int i = 0; i < M; ++i)
  {
    cin >> L[i] >> R[i];
  }

  sort(L.begin(), L.end());
  sort(R.begin(), R.end());

  int maxL = L[M - 1];
  int minR = R[0];

  int ans = 0;
  for (int i = 1; i <= N; ++i)
  {
    if (maxL <= i && i <= minR)
    {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}