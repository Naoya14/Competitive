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
  long long N;
  cin >> N;

  vector<long long> A(N), B(N);

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    B[i] = A[i];
  }

  long long a1 = A[0] + A[0];
  cout << a1 << endl;

  long long temp = A[0] + A[1];
  long long a2 = temp + temp + A[1];
  cout << a2 << endl;

  for (int i = 1; i < N; i++)
  {
  }
}