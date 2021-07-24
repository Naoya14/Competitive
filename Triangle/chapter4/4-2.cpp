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

int func(int n)
{
  cout << "calling func" << n << endl;

  if (n == 0)
    return 0;
  int result = n + func(n - 1);
  cout << "Sum of " << n << ": " << result << endl;

  return result;
}

int main()
{
  func(5);
}