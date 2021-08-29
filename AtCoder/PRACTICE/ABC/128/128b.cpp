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

  vector<tuple<string, int, int>> t;

  for (int i = 1; i <= N; ++i)
  {
    string S;
    int P;

    cin >> S >> P;
    P = -P;
    t.push_back(tie(S, P, i));
  }

  sort(t.begin(), t.end());
  for (int i = 0; i < N; ++i)
  {
    string s;
    int p;
    int id;

    tie(s, p, id) = t[i];
    cout << id << endl;
  }

  return 0;
}