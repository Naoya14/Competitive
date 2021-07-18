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

int main()
{
  int n, x;
  cin >> n >> x;

  int sum = 0;
  rep(i, n)
  {
    int a;
    cin >> a;

    if (i % 2 == 0)
    {
      sum += a;
    }
    else
    {
      sum += a - 1;
    }
  }

  if (sum <= x)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}