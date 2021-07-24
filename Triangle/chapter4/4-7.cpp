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
  vector<ll> a(50);
  a[0] = 0;
  a[1] = 1;
  for (int n = 2; n < 50; n++)
  {
    a[n] = a[n - 1] + a[n - 2];
    cout << a[n] << endl;
  }

  return 0;
}