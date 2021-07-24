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

vector<ll> memo;

int tribo(int n)
{
  if (n == 0)
  {
    return 0;
  }

  if (n == 1)
  {
    return 0;
  }

  if (n == 2)
  {
    return 1;
  }

  if (memo[n] != -1)
  {
    return memo[n];
  }

  return memo[n] = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
}

int main()
{
  int n;
  cin >> n;

  memo.assign(n, -1);

  cout << tribo(50) << endl;
  return 0;
}