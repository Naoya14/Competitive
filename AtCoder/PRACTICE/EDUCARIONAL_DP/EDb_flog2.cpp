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

int main()
{
  int N, K;
  cin >> N >> K;

  vector<int> h(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> h[i];
  }

  vector<int> dp(N, INF);
  dp[0] = 0;

  for (int i = 1; i < N; ++i)
  {
    for (int k = 1; k <= K; ++k)
    {
      if (i >= k)
      {
        chmin(dp[i], dp[i - k] + abs(h[i] - h[i - k]));
      }
    }
  }

  cout << dp[N - 1] << endl;
  return 0;
}