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

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

int main()
{
  string s;
  cin >> s;

  ll n = s.length();

  ll flagC = 0;
  ll flagH = 0;
  ll flagO = 0;
  ll flagK = 0;
  ll flagU = 0;
  ll flagD = 0;
  ll flagA = 0;
  ll flagI = 0;

  rep(i, n)
  {
    if (s[i] == 'c')
    {
      flagC++;
    }
    if (s[i] == 'h')
    {
      flagH = (flagH + flagC) % MOD;
    }
    if (s[i] == 'o')
    {
      flagO = (flagO + flagH) % MOD;
    }
    if (s[i] == 'k')
    {
      flagK = (flagK + flagO) % MOD;
    }
    if (s[i] == 'u')
    {
      flagU = (flagU + flagK) % MOD;
    }
    if (s[i] == 'd')
    {
      flagD = (flagD + flagU) % MOD;
    }
    if (s[i] == 'a')
    {
      flagA = (flagA + flagD) % MOD;
    }
    if (s[i] == 'i')
    {
      flagI = (flagI + flagA) % MOD;
    }
  }

  cout << flagI << endl;
  return 0;
}