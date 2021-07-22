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
const int mod = 1000000007;

int main()
{
  string s;
  cin >> s;
  int n = s.size();

  ll ans = 0;
  for (int bit = 0; bit < (1 << (n - 1)); bit++)
  {
    ll tmp = 0;
    for (int i = 0; i < n - 1; i++)
    {
      tmp *= 10;
      tmp += s[i] - '0';
      if (bit & (1 << i))
      {
        ans += tmp;
        tmp = 0;
      }
    }
    tmp *= 10;
    tmp += s.back() - '0';
    ans += tmp;
  }

  cout << ans << endl;
  return 0;
}