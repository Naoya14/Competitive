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
//int di[] = {-1, 0, 1, 0}; int dj[] = {0, -1, 0, 1};

int main()
{
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;

  int x = max(a, b);
  int y = min(c, d);

  int ans = x - y;
  cout << ans << endl;
  return 0;
}