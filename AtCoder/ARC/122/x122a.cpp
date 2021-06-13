#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>
#define rep(i, n) for (ll i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

long long mod(long long val, long long m)
{
  long long res = val % m;
  if (res < 0)
    res += m;
  return res;
}

const int MOD = 1000000007;

int main()
{
  ll n;
  cin >> n;
  vector<ll> a(n);

  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll ans = 0;

  if (n < 6)
  {
    for (ll s = 0; s < (1 << (n - 1)); s++)
    {
      ll temp = a[0];
      bool sub = false;
      for (ll i = 1; i < n; i++)
      {
        if (!(s >> (i - 1) & 1) && sub)
        {
          temp = 0;
          break;
        }

        if (s >> (i - 1) & 1)
        {
          temp = mod(temp + a[i], MOD);
          sub = false;
        }

        if (!(s >> (i - 1) & 1))
        {
          temp = mod(temp - a[i], MOD);
          sub = true;
        }
        temp = mod(temp, MOD);
      }
      ans = mod(ans + temp, MOD);
    }
  }

  if (n >= 6)
  {
    ll N = pow(2, n - 3);
    for (ll s = N; s < (1 << (n - 1)); s++)
    {
      ll temp = a[0];
      bool sub = false;
      for (ll i = 1; i < n; i++)
      {
        if (!(s >> (i - 1) & 1) && sub)
        {
          temp = 0;
          break;
        }

        if (s >> (i - 1) & 1)
        {
          temp = mod(temp + a[i], MOD);
          sub = false;
        }

        if (!(s >> (i - 1) & 1))
        {
          temp = mod(temp - a[i], MOD);
          sub = true;
        }
        temp = mod(temp, MOD);
      }
      ans = mod(ans + temp, MOD);
    }
  }

  ans = mod(ans, MOD);
  cout << ans << endl;

  return 0;
}