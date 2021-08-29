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

  vector<int> S(N);

  for (int i = 0; i < M; ++i)
  {
    int K;
    cin >> K;

    for (int j = 0; j < K; ++j)
    {
      int s;
      cin >> s;
      s--;

      S[s] |= 1 << i;
    }
  }

  int p = 0;
  for (int i = 0; i < M; ++i)
  {
    int x;
    cin >> x;
    p |= x << i;
  }

  int ans = 0;
  for (int b = 0; b < (1 << N); ++b)
  {
    int t = 0;

    for (int i = 0; i < N; ++i)
    {
      if (b >> i & 1)
      {
        t ^= S[i];
      }
    }

    if (t == p)
    {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}