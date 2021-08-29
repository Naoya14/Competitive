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
  int N, K;
  cin >> N >> K;

  double ans = 0;
  for (int x = 1; x <= N; ++x)
  {
    int y = x;
    double q = 1.0 / N;

    while (y < K)
    {
      y *= 2;
      q /= 2;
    }

    ans += q;
  }

  printf("%.12f\n", ans);
  return 0;
}