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
  int n, v;
  cin >> n >> v;

  vector<int> a(n);
  rep(i, n)
  {
    cin >> a[i];
  }

  bool exist = false;
  rep(i, n)
  {
    if (v == a[i])
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