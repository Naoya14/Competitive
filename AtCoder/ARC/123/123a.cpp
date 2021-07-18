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
const int mod = 1000000007;

int main()
{
  ll a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  ll x, y;
  x = a2 - a1;
  y = a3 - a2;

  ll ans = 0;
  if (x == y)
  {
    cout << ans << endl;
  }

  if (x > y && x >= 0 && y >= 0)
  {
    ans = x - y;
    cout << ans << endl;
  }

  if (x < y && x >= 0 && y >= 0)
  {
    if ((y - x) % 2 == 0)
    {
      ans = (y - x) / 2;
    }
    else
    {
      ans = ((y - x) / 2) + 2;
    }

    cout << ans << endl;
  }

  if (x > y && x >= 0 && y < 0)
  {
    ans = x - y;
    cout << ans << endl;
  }

  if (x < y && x < 0 && y >= 0)
  {
    if (abs(x) > y)
    {
      if ((y - x) % 2 == 0)
      {
        ans = (y - x) / 2;
      }
      else
      {
        ans = ((y - x) / 2) + 2;
      }
    }
    else
    {
      ans += abs(x);
      a2 += abs(x);
      x = a2 - a1;
      y = a3 - a2;
      if (y - x == 0)
      {
      }
      else if ((y - x) % 2 == 0)
      {
        ans += (y - x) / 2;
      }
      else
      {
        ans += ((y - x) / 2) + 2;
      }
    }

    cout << ans << endl;
  }

  if (x > y && x < 0 && y < 0)
  {
    ans = abs(y - x);
    cout << ans << endl;
  }

  if (x < y && x < 0 && y < 0)
  {
    x = abs(x);
    y = abs(y);
    if ((x - y) % 2 == 0)
    {
      ans += (x - y) / 2;
    }
    else
    {
      ans += ((x - y) / 2) + 2;
    }

    cout << ans << endl;
  }

  return 0;
}