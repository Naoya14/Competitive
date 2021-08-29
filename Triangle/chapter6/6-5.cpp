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

int main()
{
  int N;
  cin >> N;
  vector<ll> h(N), s(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> h[i] >> s[i];
  }

  ll left = 0;
  ll right = LINF;

  while (right - left > 1)
  {
    ll mid = (left + right) / 2;

    bool ok = true;
    vector<ll> t(N, 0);
    for (int i = 0; i < N; ++i)
    {
      if (mid < h[i])
      {
        ok = false;
      }
      else
      {
        t[i] = (mid - h[i]) / s[i];
      }
    }

    sort(t.begin(), t.end());
    for (int i = 0; i < N; ++i)
    {
      if (t[i] < i)
      {
        ok = false;
      }
    }

    if (ok)
    {
      right = mid;
    }
    else
    {
      left = mid;
    }
  }
  cout << right << endl;
  return 0;
}