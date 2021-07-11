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
  int a, b;
  cin >> a >> b;

  if (b - a < 0)
  {
    cout << 0 << endl;
    return 0;
  }

  int ans = b - a + 1;
  cout << ans << endl;
  return 0;
}