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
  int N;
  cin >> N;

  vector<int> h(N);

  for (int i = 0; i < N; i++)
  {
    cin >> h[i];
  }

  vector<int> dp(N, INF);
  dp[0] = 0;

  for (int i = 1; i < N; ++i)
  {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));

    if (i > 1)
    {
      chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[N - 1] << endl;

  return 0;
}