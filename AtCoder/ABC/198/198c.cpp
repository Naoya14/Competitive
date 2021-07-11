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
  double R, X, Y;
  cin >> R >> X >> Y;

  double distance = sqrt(X * X + Y * Y);
  if (distance < R)
  {
    cout << 2 << endl;
    return 0;
  }
  int ans = ceil(distance / R);

  cout << ans << endl;
  return 0;
}