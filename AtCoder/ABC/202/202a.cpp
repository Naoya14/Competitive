#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>

using namespace std;

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