#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  long long t, N;
  cin >> t >> N;

  int count = 1;
  int i = 1;
  long long ans = 0;
  long long first = 0;
  long long second = 0;

  while (count < 3)
  {
    long long q = (t * i);
    if (count == 1 && q >= 100)
    {
      first = (100 + t) * i;
      cout << first << endl;
      count++;
      i++;
    }
    else if (count == 2 && q >= 200)
    {
      second = (100 + t) * i;
      cout << second << endl;
      count++;
      i++;
    }
    else
    {
      i++;
    }
  }

  if (N == 1)
  {
    ans = ((first) / 100) - 1;
    cout << ans << endl;
  }
  else
  {
    ans = ((first) + (second - (first - 100)) * (N - 1)) / 100;
    cout << ans << endl;
  }
  return 0;
}