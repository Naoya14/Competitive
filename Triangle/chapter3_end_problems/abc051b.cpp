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

int main()
{
  int k, s;
  cin >> k >> s;

  int count = 0;
  for (int x = 0; x <= k; x++)
  {
    for (int y = 0; y <= k; y++)
    {
      int z = s - x - y;
      if (z >= 0 && z <= k)
      {
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}