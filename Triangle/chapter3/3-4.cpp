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

const int INF = 2000000000;

int main()
{
  int n, k;
  cin >> n >> k;

  vector<int> a(n), b(n);
  rep(i, n)
  {
    cin >> a[i];
  }

  rep(i, n)
  {
    cin >> b[i];
  }

  int min_value = INF;
  rep(i, n)
  {
    rep(j, n)
    {
      if (k > a[i] + b[j])
      {
        continue;
      }

      if (min_value > a[i] + b[j])
      {
        min_value = a[i] + b[i];
      }
    }
  }

  cout << min_value << endl;

  return 0;
}