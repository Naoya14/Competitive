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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  if (b >= (c * d))
  {
    cout << -1 << endl;
    return 0;
  }

  ll c2 = 0;
  ll count = 0;
  while (a > (c2 * d))
  {
    a += b;
    c2 += c;
    count++;
  }

  cout << count << endl;
  return 0;
}