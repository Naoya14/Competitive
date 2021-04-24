#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  double a, b, c, A, B, C;
  cin >> a >> b >> c;

  A = pow(a, 2);
  B = pow(b, 2);
  C = pow(c, 2);

  if ((A + B) < C)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else
  {
    cout << "No" << endl;
    return 0;
  }
}