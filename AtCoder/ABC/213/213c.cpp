#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>
#include <map>
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
  int h, w, n;
  cin >> h >> w >> n;

  vector<Pii> A(n);
  vector<Pii> B(n);

  map<int, int> H;
  map<int, int> W;

  rep(i, n)
  {
    int a, b;
    cin >> A[i].first >> B[i].first;

    A[i].second = i;
    B[i].second = i;

    H[a]++;
    W[b]++;
  }

  ll hsize = H.size();
  ll wsize = W.size();

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  for (int i = 0; i < n; i++)
  {
    A[i].first = i + 1;
    B[i].first = i + 1;
  }

  return 0;
}