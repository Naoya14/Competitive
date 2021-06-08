#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

// string : S.length() | reverse(S.begin(), S.end()) | string(A, 'a') | stoll(S)
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  int N;
  cin >> N;

  vector<int> A(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  vector<int> V(200);

  rep(j, N)
  {
    V[(A[j] % 200)]++;
  }

  long long ans = 0;
  rep(k, 200)
  {
    if (V[k] > 1)
    {
      ans += (V[k] * (V[k] - 1)) / 2;
    }
  }
  cout << ans << endl;
  return 0;
}