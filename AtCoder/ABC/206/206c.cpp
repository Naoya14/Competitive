#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <map>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pll = pair<long, long>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

int main()
{
  ll N;
  cin >> N;

  vector<ll> A(N);
  map<ll, ll> mp;

  rep(i, N)
  {
    ll a;
    cin >> a;
    A[i] = a;
    mp[a]++;
  }

  ll ans = 0;
  ll n = N - 1;
  for (ll i = 0; i < N - 1; i++)
  {
    ans = ans + (n - (mp[A[i]] - 1));
    mp[A[i]]--;
    n--;
  }
  cout << ans << endl;
  return 0;
}