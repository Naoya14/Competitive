#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
  int n;
  cin >> n;

  long long s = 0;
  long long t = 0;
  long long m = 0;
  for (int i = 0; i < n; i++)
  {
    long long x;
    cin >> x;
    s += x;
    t += s;
    m = max(m, x);
    cout << t + m * (i + 1) << endl;
  }
  return 0;
}