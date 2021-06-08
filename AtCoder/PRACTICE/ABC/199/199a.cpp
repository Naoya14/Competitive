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

// math   : pow(A, 2)
// string : S.length() | reverse(S.begin(), S.end()) | string(A, 'a') | stoll(S)
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  double A, B, C;
  cin >> A >> B >> C;

  A = pow(A, 2);
  B = pow(B, 2);
  C = pow(C, 2);

  if (A + B < C)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}