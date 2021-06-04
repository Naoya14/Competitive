#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>

using namespace std;
using ll = long long;
using P = pair<int, int>;

// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());

int main()
{
  int n, k;
  cin >> n >> k;

  int ans = 0;
  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < k + 1; j++)
    {
      ans += (100 * i) + j;
    }
  }

  cout << ans << endl;
  return 0;
}