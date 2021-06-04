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
  int ra, rb, rc;
  cin >> a >> b >> c;

  ra = 7 - a;
  rb = 7 - b;
  rc = 7 - c;

  int ans = ra + rb + rc;
  cout << ans << endl;
  return 0;
}