#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

struct Edge
{
  int to;
  ll w;
  Edge(int to, ll w) : to(to), w(w) {}
};

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

int main()
{
  int N;
  cin >> N;

  vector<int> W(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> W[i];
  }

  int ans = INF;
  for (int i = 0; i < N - 1; ++i)
  {
    int s1 = 0;
    int s2 = 0;
    for (int j = 0; j <= i; ++j)
    {
      s1 += W[j];
    }

    for (int k = i + 1; k < N; ++k)
    {
      s2 += W[k];
    }

    ans = min(ans, abs(s1 - s2));
  }

  cout << ans << endl;
  return 0;
}