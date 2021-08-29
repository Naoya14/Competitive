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
  vector<ll> A(N), B(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> B[i];
  }

  ll sum = 0;
  for (int i = N - 1; i >= 0; --i)
  {
    A[i] += sum;
    ll amari = A[i] % B[i];
    ll D = 0;
    if (amari != 0)
    {
      D = B[i] - amari;
    }
    sum += D;
  }

  cout << sum << endl;

  return 0;
}