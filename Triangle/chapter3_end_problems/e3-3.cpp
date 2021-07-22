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
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, n)
  {
    cin >> a[i];
  }

  int min_1 = INF;
  int min_2 = INF;
  rep(i, n)
  {
    if (min_1 > a[i])
    {
      min_2 = min_1;
      min_1 = a[i];
    }
  }

  cout << min_2 << endl;

  return 0;
}