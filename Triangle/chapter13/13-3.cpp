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

vector<int> BFS(const Graph &G, int s)
{
  int N = (int)G.size();
  vector<int> dist(N, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);

  while (!que.empty())
  {
    int v = que.front();
    que.pop();

    for (int x : G[v])
    {
      if (dist[x] != -1)
      {
        continue;
      }

      dist[x] = dist[v] + 1;
      que.push(x);
    }
  }
  return dist;
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

  vector<int> dist = BFS(G, 0);
}