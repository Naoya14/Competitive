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

int GCD(int m, int n)
{
  cout << m << endl;
  if (n == 0)
    return m;
  return GCD(n, m % n);
}

int main()
{
  cout << GCD(51, 15) << endl;
  return 0;
}