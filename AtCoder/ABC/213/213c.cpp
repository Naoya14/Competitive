#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>
#include <map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

vector<int> compress(vector<int> x)
{
  int n = x.size();
  map<int, int> mp;

  for (int i = 0; i < n; ++i)
  {
    mp[x[i]] = 0;
  }

  int id = 1;

  for (auto &p : mp)
  {
    p.second = id++;
  }

  for (int i = 0; i < n; ++i)
  {
    x[i] = mp[x[i]];
  }

  return x;
}

int main()
{
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n)
  {
    cin >> a[i] >> b[i];
  }
  a = compress(a);
  b = compress(b);

  rep(i, n)
  {
    cout << a[i] << " " << b[i] << endl;
  }

  return 0;
}