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

int main()
{
  ll a, b, c;
  cin >> a >> b >> c;
  string ans;

  if (c % 2 == 0)
  {
    a = abs(a);
    b = abs(b);
    if (a > b)
    {
      ans = ">";
    }
    else if (a < b)
    {
      ans = "<";
    }
    else
    {
      ans = "=";
    }
  }

  if (c % 2 == 1)
  {
    if (a > 0 && b > 0)
    {
      if (a > b)
      {
        ans = ">";
      }
      else if (a < b)
      {
        ans = "<";
      }
      else
      {
        ans = "=";
      }
    }

    if (a < 0 && b > 0)
    {
      ans = "<";
    }

    if (a > 0 && b < 0)
    {
      ans = ">";
    }

    if (a < 0 && b < 0)
    {
      if (a > b)
      {
        ans = ">";
      }
      else if (a < b)
      {
        ans = "<";
      }
      else
      {
        ans = "=";
      }
    }
    if (a == 0)
    {
      if (b < 0)
      {
        ans = ">";
      }
      else if (b > 0)
      {
        ans = "<";
      }
      else
      {
        ans = "=";
      }
    }

    if (b == 0)
    {
      if (a < 0)
      {
        ans = "<";
      }
      else if (a > 0)
      {
        ans = ">";
      }
      else
      {
        ans = "=";
      }
    }
  }

  cout << ans << endl;
  return 0;
}