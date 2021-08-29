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

const int N = 8;
const vector<int> a = {1, 3, 5, 6, 10, 15, 20, 29, 39};

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> a(N), b(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  for (int i = 0; i < N; ++i)
  {
    cin >> b[i];
  }

  int min_value = INF;

  sort(b.begin(), b.end());

  for (int i = 0; i < N; ++i)
  {
    auto iter = lower_bound(b.begin(), b.end(), K - a[i]);

    int val = *iter;

    if (a[i] + val < min_value)
    {
      min_value = a[i] + val;
    }
  }

  cout << min_value << endl;
  return 0;
}