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

// math   : pow(A, 2) | sqrt(X * X + Y * Y) | ceil(a)
// string : S.length() | reverse(S.begin(), S.end()) | string(A, 'a')
//          stoll(S) | swap(S[a], S[b]) | S.substr(0, n)
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  double R, X, Y;
  cin >> R >> X >> Y;

  double distance = sqrt(X * X + Y * Y);
  if (distance < R)
  {
    cout << 2 << endl;
    return 0;
  }
  int ans = ceil(distance / R);

  cout << ans << endl;
  return 0;
}