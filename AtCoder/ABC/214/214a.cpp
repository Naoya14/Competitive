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

  if (1 <= n && n <= 125)
  {
    cout << 4 << endl;
  }
  else if (126 <= n && n <= 211)
  {
    cout << 6 << endl;
  }
  else
  {
    cout << 8 << endl;
  }

  return 0;
}