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
  int n, w;
  cin >> n >> w;
  vector<int> a(n);

  rep(i, n)
  {
    cin >> a[i];
  }

  bool exist = false;
  for (int bit = 0; bit < (1 << n); ++bit)
  {
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
      if (bit & (1 << i))
        sum += a[i];
    }

    if (sum == w)
    {
      exist = true;
    }
  }

  if (exist)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}