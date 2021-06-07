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

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());

int main()
{
  int x, y;
  cin >> x >> y;

  if (x != y)
  {
    if (x == 0 && y == 1)
    {
      cout << 2 << endl;
      return 0;
    }
    if (x == 0 && y == 2)
    {
      cout << 1 << endl;
      return 0;
    }
    if (x == 1 && y == 0)
    {
      cout << 2 << endl;
      return 0;
    }
    if (x == 1 && y == 2)
    {
      cout << 0 << endl;
      return 0;
    }
    if (x == 2 && y == 0)
    {
      cout << 1 << endl;
      return 0;
    }
    if (x == 2 && y == 1)
    {
      cout << 0 << endl;
      return 0;
    }
  }
  else
  {
    cout << x << endl;
    return 0;
  }
}