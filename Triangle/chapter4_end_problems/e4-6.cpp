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

vector<vector<int>> memo;

bool func(int i, int w, const vector<int> &a)
{
  if (i == 0)
  {
    if (w == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  if (memo[i][w] != -1)
  {
    return memo[i][w];
  }

  if (func(i - 1, w, a))
  {
    return memo[i][w] = 1;
  }

  if (func(i - 1, w - a[i - 1], a))
  {
    return memo[i][w] = 1;
  }

  return memo[i][w] = 0;
}

int main()
{
  int n, w;
  cin >> n >> w;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  memo.assign(n + 1, vector<int>(w + 1, -1));

  if (func(n, w, a))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}