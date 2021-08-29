#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

bool cmp(const Pii &a, const Pii &b)
{
  return a.second < b.second;
}

int main()
{
  int N;
  cin >> N;
  vector<Pii> inter(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> inter[i].first >> inter[i].second;
  }

  sort(inter.begin(), inter.end(), cmp);

  int res = 0;
  int current_end_time = 0;
  for (int i = 0; i < N; ++i)
  {
    if (inter[i].first < current_end_time)
    {
      continue;
    }

    ++res;
    current_end_time = inter[i].second;
  }

  cout << res << endl;
  return 0;
}