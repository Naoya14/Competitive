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

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

const vector<int> coin = {500, 100, 50, 10, 5, 1};

int main()
{
  int X;
  cin >> X;

  vector<int> a(6);

  for (int i = 0; i < 6; ++i)
  {
    cin >> a[i];
  }

  int result = 0;
  for (int i = 0; i < 6; ++i)
  {
    int add = X / coin[i];

    if (add > a[i])
    {
      add = a[i];
    }

    X -= coin[i] * add;
    result += add;
  }

  cout << result << endl;

  return 0;
}