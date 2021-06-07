#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>

using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());
// vector<vector<int>> V;

//dfs
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
  // vertex and edge
  int N, M;
  cin >> N >> M;

  // direcred graph
  Graph G(N);
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  //dfs search
  seen.assign(N, false); // initialize as every vertex as false
  for (int v = 0; v < N; v++)
  {
    if (seen[v])
    {
      continue;
    }
    dfs(G, v);
  }
}