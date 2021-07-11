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
  int N;
  cin >> N;
  vector<int> C(N);

  rep(i, N)
  {
    cin >> C[i];
  }
  sort(C.begin(), C.end());
  ll ans = 1;
  rep(i, N)
  {
    ans = (ans * max(0, C[i] - i)) % 1000000007;
  }
  cout << ans << endl;
  return 0;
}