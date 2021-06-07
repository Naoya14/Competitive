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

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  string s;
  cin >> s;
  int ans = 0;
  rep(num, 10000)
  {
    vector<int> a(10);
    int x = num;
    rep(i, 4)
    {
      int d = x % 10;
      a[d] = 1;
      x /= 10;
    }
    bool ok = true;
    rep(i, 10)
    {
      if (s[i] == 'o' && a[i] != 1)
      {
        ok = false;
      }
      if (s[i] == 'x' && a[i] != 0)
      {
        ok = false;
      }
    }
    if (ok)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}