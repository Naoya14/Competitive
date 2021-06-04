#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>

using namespace std;
using ll = long long;
using P = pair<int, int>;

// string : S.length() reverse(S.begin(), S.end())
// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());

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

  ll ans = 0;
  for (int i = 0; i < N; i++)
  {
    ans += count[A[i]];
  }

  cout << ans << endl;
  return 0;
}