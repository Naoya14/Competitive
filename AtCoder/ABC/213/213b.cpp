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

  vector<Pii> a(n);

  rep(i, n)
  {
    cin >> a[i].first;
    a[i].second = i + 1;
  }

  sort(a.begin(), a.end());

  cout << a[n - 2].second << endl;
  return 0;
}
