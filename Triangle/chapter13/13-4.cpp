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

vector<bool> seen;
void dfs(const Graph &G, int v)
{
  seen[v] = true;

  for (auto next_v : G[v])
  {
    if (seen[next_v])
    {
      continue;
    }

    dfs(G, next_v);
  }
}

int main()
{
  int N, M, s, t;
  cin >> N >> M >> s >> t;

  Graph G(N);
  for (int i = 0; i < M; ++i)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  seen.assign(N, false);
  dfs(G, s);

  if (seen[t])
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}