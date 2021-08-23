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
  int N, W;
  cin >> N >> W;

  vector<ll> weight(N);
  vector<ll> value(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> weight[i] >> value[i];
  }

  vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));

  for (int i = 0; i < N; ++i)
  {
    for (int w = 0; w <= W; ++w)
    {
      if (w - weight[i] >= 0)
      {
        chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
      }

      chmax(dp[i + 1][w], dp[i][w]);
    }
  }

  cout << dp[N][W] << endl;
  return 0;
}