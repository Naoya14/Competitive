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

void search(const Graph &G, int s)
{
  int N = (int)G.size();

  vector<bool> seen(N, false);
  queue<int> todo;

  seen[s] = true;
  todo.push(s);

  while (!todo.empty())
  {
    int v = todo.front();
    todo.pop();

    for (int x : G[v])
    {
      if (seen[x])
      {
        continue;
      }
      seen[x] = true;
      todo.push(x);
    }
  }
}

int main()
{
}