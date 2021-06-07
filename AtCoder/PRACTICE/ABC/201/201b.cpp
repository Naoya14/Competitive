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
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair   : sort(V.begin(), V.end(), greater<Pis>());
// vector : vector<vector<int>> V;

int main()
{
  int N;
  cin >> N;
  vector<Pis> V(N);

  for (int i = 0; i < N; i++)
  {
    cin >> V[i].second >> V[i].first;
  }

  sort(V.begin(), V.end(), greater<Pis>());

  cout << V[1].second << endl;
  return 0;
}