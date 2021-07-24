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
const int mod = 1000000007;

void func(ll n, ll cur, int use, ll &counter)
{
  if (cur > n)
    return;

  if (use == 0b111)
  {
    counter++;
  }

  func(n, cur * 10 + 7, use | 0b001, counter);
  func(n, cur * 10 + 5, use | 0b010, counter);
  func(n, cur * 10 + 3, use | 0b100, counter);
}

int main()
{
  int n;
  cin >> n;
  ll counter = 0;
  func(n, 0, 0, counter);
  cout << counter << endl;
  return 0;
}