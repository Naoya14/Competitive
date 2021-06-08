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
// string : S.length() | reverse(S.begin(), S.end()) | string(A, 'a')
//          stoll(S) | swap(S[a], S[b]) | S.substr(0, n)
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  int N;
  string S;
  int Q;
  cin >> N;
  cin >> S;
  cin >> Q;

  int flag = 0;
  int n2 = N * 2;
  rep(i, Q)
  {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1)
    {
      --a;
      --b;
      if (flag)
      {
        a = (a + N) % n2;
        b = (b + N) % n2;
      }
      swap(S[a], S[b]);
    }
    else
    {
      flag ^= 1;
    }
  }

  if (flag)
  {
    string S1 = S.substr(0, N);
    string S2 = S.substr(N);
    S = S2 + S1;
  }

  cout << S << endl;
  return 0;
}