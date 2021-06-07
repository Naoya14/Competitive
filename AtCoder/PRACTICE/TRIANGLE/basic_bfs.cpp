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

using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair   : sort(V.begin(), V.end(), greater<pair<int, string>>());
// vector : vector<vector<int>> V;

vector<int> BFS(const Graph &G, int s)
{
  int N = (int)G.size(); // number of vertex
  vector<int> dist(N, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);

  // start BFS
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
      dist[x] = dist[v] = 1;
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
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> dist = BFS(G, 0);

  for (int v = 0; v < M; v++)
  {
    cout << v << ": " << dist[v] << endl;
  }
}