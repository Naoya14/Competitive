#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;
const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

int main()
{
  int n;
  cin >> n;
  vector<ll> h(n);

  rep(i, n)
  {
    cin >> h[i];
  }

  vector<ll> dp(n, LINF);

  dp[0] = 0;

  for (int i = 1; i < n; i++)
  {
    if (i == 1)
    {
      dp[i] = abs(h[i] - h[i - 1]);
    }
    else
    {
      dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[n - 1] << endl;
  return 0;
}