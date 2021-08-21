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

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

int main()
{
  string s;
  int k;
  cin >> s >> k;
  sort(s.begin(), s.end());
  while (k > 1)
  {
    next_permutation(s.begin(), s.end());
    k--;
  }
  cout << s << endl;
  return 0;
}