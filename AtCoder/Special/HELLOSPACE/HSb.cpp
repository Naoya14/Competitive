#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <regex>

using namespace std;

int main()
{
  int N, D, H;
  cin >> N >> D >> H;

  vector<int> d(N);
  vector<int> h(N);

  for (int i = 0; i < N; i++)
  {
    cin >> d[i] >> h[i];
  }

  double max = 0;
  for (int i = 0; i < N; i++)
  {
    double d1 = D - d[i];
    double h1 = H - h[i];
    double a1 = h1 / d1;
    double c = H - (D * a1);

    if (c > max)
    {
      max = c;
    }
  }

  cout << max << endl;
  return 0;
}