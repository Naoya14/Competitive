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

ll fibo(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }

  if (memo[n] != -1)
  {
    return memo[n];
  }

  return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
  memo.assign(50, -1);
  fibo(49);
  for (int i = 2; i < 50; i++)
  {
    cout << memo[i] << endl;
  }

  return 0;
}