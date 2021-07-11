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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> ans(n, k / n);
  k %= n;

  vector<Pii> p(n);
  rep(i, n) p[i] = Pii(a[i], i);
  sort(p.begin(), p.end());
  rep(i, k) ans[p[i].second]++;

  rep(i, n) cout << ans[i] << endl;
  return 0;
}