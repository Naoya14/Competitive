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
  string S;
  cin >> S;

  int a = (S[0] - '0') * 10 + S[1] - '0'; // change string to integer
  int b = (S[2] - '0') * 10 + S[3] - '0';

  bool MMYY = false;
  if (1 <= a && a <= 12)
  {
    MMYY = true;
  }

  bool YYMM = false;
  if (1 <= b && b <= 12)
  {
    YYMM = true;
  }

  if (YYMM and MMYY)
    cout << "AMBIGUOUS" << endl;
  else if (YYMM)
    cout << "YYMM" << endl;
  else if (MMYY)
    cout << "MMYY" << endl;
  else
    cout << "NA" << endl;

  return 0;
}