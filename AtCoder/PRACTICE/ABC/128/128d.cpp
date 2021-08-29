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

  vector<int> V(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> V[i];
  }

  int ans = 0;
  for (int l = 0; l <= K; ++l)
  {
    for (int r = 0; r <= K - l; ++r)
    {
      if (l + r > N)
      {
        continue;
      }

      int d = K - l - r;
      int now = 0;
      vector<int> S;

      for (int i = 0; i < l; ++i)
      {
        now += V[i];
        S.push_back(V[i]);
      }

      for (int i = N - r; i < N; ++i)
      {
        now += V[i];
        S.push_back(V[i]);
      }

      sort(S.begin(), S.end());

      for (int i = 0; i < d; ++i)
      {
        if (i >= S.size())
        {
          break;
        }

        if (S[i] > 0)
        {
          break;
        }

        now -= S[i];
      }

      ans = max(ans, now);
    }
  }

  cout << ans << endl;
  return 0;
}