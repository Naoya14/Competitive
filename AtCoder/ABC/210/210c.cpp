#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <map>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;
using Map = map<int, int>;
const int mod = 1000000007;

int main()
{
  int n, k;
  cin >> n >> k;

  vector<int> c(n);

  rep(i, n)
  {
    cin >> c[i];
  }

  Map mp;
  for (int i = 0; i < k; i++)
  {
    mp[c[i]]++;
  }
  int ans = mp.size();

  for (int i = k; i < n; i++)
  {
    mp[c[i]]++;
    mp[c[i - k]]--;

    if (mp[c[i - k]] == 0)
    {
      mp.erase(c[i - k]);
    }
    ans = max(ans, (int)mp.size());
  }

  cout << ans << endl;

  return 0;
}