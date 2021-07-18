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
  int n, a, x, y;
  cin >> n >> a >> x >> y;

  int ans = 0;
  if (n >= a)
  {
    int b = max(n - a, 0);
    ans = (x * a) + (y * b);
  }
  else
  {
    ans = x * n;
  }

  cout << ans << endl;
  return 0;
}