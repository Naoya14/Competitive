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
  int s, t;
  cin >> s >> t;

  int ans = 0;

  for (int i = 0; i <= 100; ++i)
  {
    for (int j = 0; j <= 100; ++j)
    {
      for (int k = 0; k <= 100; ++k)
      {
        if (i + j + k <= s && i * j * k <= t)
        {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}