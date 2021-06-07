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

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  ll ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] >= 10)
    {
      ans += (A[i] - 10);
    }
  }

  cout << ans << endl;
  return 0;
}