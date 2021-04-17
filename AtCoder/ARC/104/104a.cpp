#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int x, y;
  x = (a + b) / 2;

  y = (a - b) / 2;

  cout << x << " " << y;
  return 0;
}