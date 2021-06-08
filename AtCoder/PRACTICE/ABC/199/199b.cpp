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

// math   : pow(A, 2)
// string : S.length() | reverse(S.begin(), S.end()) | string(A, 'a') | stoll(S)
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  int N;
  cin >> N;

  int maxA = 0;
  rep(i, N)
  {
    int A;
    cin >> A;
    maxA = max(maxA, A);
  }

  int minB = 1000;
  rep(i, N)
  {
    int B;
    cin >> B;
    minB = min(minB, B);
  }

  int ans = 0;
  if (maxA <= minB)
  {
    ans = minB - maxA + 1;
  }

  cout << ans << endl;
  return 0;
}