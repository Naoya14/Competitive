#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>

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