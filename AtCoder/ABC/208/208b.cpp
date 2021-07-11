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

int fac[20];

int main()
{
  fac[0] = 1;
  for (int i = 1; i <= 10; i++)
  {
    fac[i] = fac[i - 1] * i;
  }

  int p;
  int ans = 0;
  cin >> p;

  for (int i = 10; i >= 1; --i)
  {
    while (p >= fac[i])
    {
      ans++;
      p -= fac[i];
    }
  }

  cout << ans << endl;
  return 0;
}