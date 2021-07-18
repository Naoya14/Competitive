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
const ll mod = 1000000007;

int main()
{
  ll n;
  cin >> n;
  vector<ll> C(n);

  rep(i, n)
  {
    cin >> C[i];
  }

  sort(C.begin(), C.end());

  ll ans = 1;
  for (ll i = 0; i < n; i++)
  {
    ans = (ans * max((ll)0, C[i] - i)) % mod;
  }

  cout << ans << endl;
  return 0;
}