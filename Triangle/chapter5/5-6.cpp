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

int n;
vector<ll> h;
vector<ll> dp;

ll rec(int i)
{
  if (dp[i] < INF)
  {
    return dp[i];
  }

  if (i == 0)
  {
    return 0;
  }

  ll res = INF;

  chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));

  if (i > 1)
  {
    chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
  }

  return dp[i] = res;
}

int main()
{
  cin >> n;
  h.resize(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> h[i];
  }

  dp.assign(n, INF);

  cout << rec(n - 1) << endl;
  return 0;
}