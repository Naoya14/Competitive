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
  int n;
  cin >> n;
  vector<int> a(n);

  rep(i, n)
  {
    cin >> a[i];
  }
  int ans = 1 << 30;
  rep(s, 1 << (n - 1))
  {
    int now = 0;
    int o = 0;
    rep(i, n)
    {
      o |= a[i];
      if (s >> i & 1)
      {
        now ^= o;
        o = 0;
      }
    }
    now ^= o;
    ans = min(ans, now);
  }
  cout << ans << endl;
  return 0;
}