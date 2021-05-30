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
    return 0;
  }

  if (a == c)
  {
    cout << b << endl;
    return 0;
  }

  if (b == c)
  {
    cout << a << endl;
    return 0;
  }

  cout << 0 << endl;
  return 0;
}