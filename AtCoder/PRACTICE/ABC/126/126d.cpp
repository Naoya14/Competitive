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

struct Edge
{
  int to;
  int weight;
  Edge(int to, int weight) : to(to), weight(weight) {}
};

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;
using WGraph = vector<vector<Edge>>;

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

vector<int> BFS(const WGraph &WG, int N)
{
  vector<int> ans(N, -1);
  queue<int> que;

  ans[0] = 0;
  que.push(0);

  while (!que.empty())
  {
    int v = que.front();
    que.pop();

    for (auto e : WG[v])
    {
      int t = e.to;
      int w = e.weight;

      if (ans[t] != -1)
      {
        continue;
      }

      ans[t] = (ans[v] + w) % 2;
      que.push(t);
    }
  }

  return ans;
}

int main()
{
  int N;
  cin >> N;

  WGraph WG(N);
  for (int i = 0; i < N - 1; ++i)
  {
    int a, b, w;
    cin >> a >> b >> w;
    a--;
    b--;

    WG[a].push_back(Edge(b, w));
    WG[b].push_back(Edge(a, w));
  }

  vector<int> ans = BFS(WG, N);

  for (int i = 0; i < N; ++i)
  {
    cout << ans[i] << endl;
  }

  return 0;
}