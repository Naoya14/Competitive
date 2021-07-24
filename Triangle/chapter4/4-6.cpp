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

int fibo(int n)
{
  cout << "Calling fibo " << n << endl;
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;

  int result = fibo(n - 1) + fibo(n - 2);
  cout << n << ": " << result << endl;
  return result;
}

int main()
{
  fibo(6);
}