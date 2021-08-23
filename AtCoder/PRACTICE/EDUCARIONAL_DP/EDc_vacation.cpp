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

template <class T>
void chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
  }
}

template <class T>
void chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
  }
}

int main()
{
  int N;
  cin >> N;

  vector<vector<ll>> a(N, vector<ll>(3));
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cin >> a[i][j];
    }
  }

  vector<vector<ll>> dp(N + 1, vector<ll>(3));

  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 3; ++k)
      {
        if (j == k)
          continue;
        chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
      }
    }
  }

  ll res = 0;
  for (int j = 0; j < 3; ++j)
  {
    chmax(res, dp[N][j]);
  }

  cout << res << endl;
  return 0;
}