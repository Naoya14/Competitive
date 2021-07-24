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
  vector<string> s(4);

  for (int i = 0; i < 4; i++)
  {
    cin >> s[i];
  }

  int flag1 = 0;
  int flag2 = 0;
  int flag3 = 0;
  int flag4 = 0;

  for (int i = 0; i < 4; i++)
  {
    if (s[i] == "HR")
    {
      flag1 = 1;
    }
    if (s[i] == "2B")
    {
      flag2 = 1;
    }
    if (s[i] == "3B")
    {
      flag3 = 1;
    }
    if (s[i] == "H")
    {
      flag4 = 1;
    }
  }

  if (flag1 && flag2 && flag3 && flag4)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}