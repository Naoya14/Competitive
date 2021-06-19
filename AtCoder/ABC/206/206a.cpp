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
  int N;
  cin >> N;

  double TAX = 1.08;

  int ans = N * TAX;

  if (ans == 206)
  {
    cout << "so-so" << endl;
  }
  else if (ans < 206)
  {
    cout << "Yay!" << endl;
  }
  else
  {
    cout << ":(" << endl;
  }

  return 0;
}