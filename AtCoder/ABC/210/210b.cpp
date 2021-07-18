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
  int n;
  string s;
  cin >> n;
  cin >> s;

  int count;
  rep(i, n)
  {
    if (s[i] == '1')
    {
      count = i;
      break;
    }
  }

  if (count % 2 == 0)
  {
    cout << "Takahashi" << endl;
  }
  else
  {
    cout << "Aoki" << endl;
  }

  return 0;
}