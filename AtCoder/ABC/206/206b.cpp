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
  ll N;
  cin >> N;

  ll saving = 0;
  ll i = 1;

  while (saving < N)
  {
    saving += i;
    i++;
  }

  i--;
  cout << i << endl;
  return 0;
}