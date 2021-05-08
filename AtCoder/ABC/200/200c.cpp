#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>

uintmax_t combination(unsigned int n, unsigned int r)
{
  if (r * 2 > n)
    r = n - r;
  uintmax_t dividend = 1;
  uintmax_t divisor = 1;
  for (unsigned int i = 1; i <= r; ++i)
  {
    dividend *= (n - i + 1);
    divisor *= i;
  }
  return dividend / divisor;
}

using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> A(N);
  vector<long long> V(200);

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  for (int i = 0; i < 200; ++i)
  {
    V[i] = 0;
  }

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    V[A[i] % 200]++;
  }

  for (int i = 0; i < 200; ++i)
  {
    if (V[i] > 1)
    {
      ans = ans + ((V[i] * (V[i] - 1)) / 2);
    }
  }

  cout << ans << endl;
  return 0;
}