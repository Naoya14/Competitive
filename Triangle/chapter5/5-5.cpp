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

vector<ll> h;

ll rec(int i)
{
  if (i == 0)
  {
    return 0;
  }

  ll res = LINF;

  chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));

  if (i > 1)
  {
    chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
  }

  return res;
}

int main()
{
}