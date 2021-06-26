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
using Pll = pair<long, long>;
using Graph = vector<vector<int>>;

int main()
{
  ll n;
  cin >> n;

  vector<long double> T(n);
  vector<long double> L(n);
  vector<long double> R(n);

  rep(i, n)
  {
    long double l, r;
    cin >> T[i] >> l >> r;

    if (T[i] == 1)
    {
      L[i] = l;
      R[i] = r;
    }

    if (T[i] == 2)
    {
      L[i] = l;
      R[i] = r - 0.1;
    }

    if (T[i] == 3)
    {
      L[i] = l + 0.1;
      R[i] = r;
    }

    if (T[i] == 4)
    {
      L[i] = l + 0.1;
      R[i] = r - 0.1;
    }
  }

  ll ans = 0;
  rep(i, n)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (!(L[i] > R[j] || R[i] < L[j]))
      {
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}