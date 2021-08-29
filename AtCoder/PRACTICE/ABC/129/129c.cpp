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

  vector<int> broken(N + 1);
  for (int i = 0; i < M; ++i)
  {
    int a;
    cin >> a;
    broken[a] = 1;
  }

  vector<int> dp(N + 2);

  dp[N] = 1;

  for (int i = N - 1; i >= 0; --i)
  {
    if (broken[i])
    {
      dp[i] = 0;
      continue;
    }

    dp[i] = (dp[i + 1] + dp[i + 2]) % MOD;
  }

  cout << dp[0] << endl;

  return 0;
}