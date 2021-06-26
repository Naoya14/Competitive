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

  vector<int> a(3);

  rep(i, 3)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int ans = a[1] + a[2];
  cout << ans << endl;

  return 0;
}