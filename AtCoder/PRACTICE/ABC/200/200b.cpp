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

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  ll N, K;
  cin >> N >> K;

  for (int i = 0; i < K; ++i)
  {
    if (N % 200 == 0)
    {
      N /= 200;
    }
    else
    {
      string S = to_string(N);
      S = S + "200";
      N = stoll(S);
    }
  }

  cout << N << endl;
  return 0;
}