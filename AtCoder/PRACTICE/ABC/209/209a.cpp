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
  int a, b;
  cin >> a >> b;

  if (a > b)
  {
    cout << 0 << endl;
    return 0;
  }

  cout << b - a + 1 << endl;
  return 0;
}