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
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b)
  {
    cout << c << endl;
  }
  else if (a == c)
  {
    cout << b << endl;
  }
  else if (b == c)
  {
    cout << a << endl;
  }
  else
  {
    cout << 0 << endl;
  }

  return 0;
}