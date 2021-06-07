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
using Graph = vector<vector<int>>;

// string : S.length() reverse(S.begin(), S.end()) string(A, 'a')
// pair   : sort(V.begin(), V.end(), greater<pair<int, string>>());
// vector : vector<vector<int>> V;

int main()
{
  vector<int> A(3);
  for (int i = 0; i < 3; i++)
  {
    cin >> A[i];
  }

  sort(A.begin(), A.end());

  if (A[2] - A[1] == A[1] - A[0])
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}