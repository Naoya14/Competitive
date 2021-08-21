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

int main()
{
  int n;
  cin >> n;

  vector<ll> s(n);
  vector<ll> t(n);

  rep(i, n)
  {
    cin >> s[i];
  }

  rep(i, n)
  {
    cin >> t[i];
  }

  for (int i = 0; i < n * 2; ++i)
  {
    t[(i + 1) % n] = min(t[(i + 1) % n], t[i % n] + s[i % n]);
  }

  rep(i, n)
  {
    cout << t[i] << endl;
  }

  return 0;
}