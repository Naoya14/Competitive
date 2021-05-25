#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int N;
  cin >> N;

  vector<pair<int, string>> V(N);

  for (int i = 0; i < N; i++)
  {
    cin >> V[i].second >> V[i].first;
  }

  sort(V.begin(), V.end(), greater<pair<int, string>>());

  cout << V[1].second << endl;
  return 0;
}