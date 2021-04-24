#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++)
  {
    cin >> B[i];
  }

  int maxA = 0;
  int minB = 1000;
  for (int i = 0; i < N; i++)
  {
    if (maxA < A[i])
    {
      maxA = A[i];
    }

    if (minB > B[i])
    {
      minB = B[i];
    }
  }

  int ans = 0;
  if (maxA <= minB)
  {
    ans = minB - maxA + 1;
  }

  cout << ans << endl;
  return 0;
}