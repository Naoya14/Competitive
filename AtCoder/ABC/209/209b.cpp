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

int main()
{
  int n, x;
  int a;
  cin >> n >> x;

  vector<int> A(n);

  rep(i, n)
  {
    cin >> a;
    if (i % 2 == 0)
    {
      A[i] = a;
    }
    else
    {
      A[i] = a - 1;
    }
  }

  int sum = 0;
  rep(i, n)
  {
    sum += A[i];
  }

  if (sum <= x)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}