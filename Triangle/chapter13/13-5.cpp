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

vector<int> color;
bool dfs(const Graph &G, int v, int cur = 0)
{
  color[v] = cur;
  for (auto next_v : G[v])
  {
    if (color[next_v != -1])
    {
      if (color[next_v] == cur)
      {
        return false;
      }
      continue;
    }

    if (!dfs(G, next_v, 1 - cur))
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int N, M;
  cin >> N >> M;

  Graph G(N);
  for (int i = 0; i < M; ++i)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  color.assign(N, -1);
  bool is_bipartite = true;

  for (int v = 0; v < N; ++v)
  {
    if (color[v] != -1)
    {
      continue;
    }

    if (!dfs(G, v))
    {
      is_bipartite = false;
    }
  }

  if (is_bipartite)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}