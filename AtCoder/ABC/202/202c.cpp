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
  int N;
  cin >> N;

  vector<int> A(N), B(N), C(N), count(N);

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++)
  {
    cin >> B[i];
  }

  for (int i = 0; i < N; i++)
  {
    cin >> C[i];
  }

  for (int i = 0; i < N; i++)
  {
    count[B[C[i] - 1]] += 1;
  }

  long long ans = 0;
  for (int i = 0; i < N; i++)
  {
    ans += count[A[i]];
  }

  cout << ans << endl;
  return 0;
}