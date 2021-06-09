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
// string : S.length() | reverse(S.begin(), S.end()) | string(A, 'a')
//          stoll(S) | swap(S[a], S[b]) | S.substr(0, n)
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  int n;
  cin >> n;

  if (n == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }

  while (n % 10 == 0)
  {
    n /= 10;
  }

  string s = to_string(n);
  string rs = s;
  reverse(rs.begin(), rs.end());

  if (s == rs)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}