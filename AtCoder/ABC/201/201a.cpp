#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
  vector<int> V(3);

  for (int i = 0; i < 3; ++i)
  {
    cin >> V[i];
  }

  sort(V.begin(), V.end());

  if (V[2] - V[1] == V[1] - V[0])
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}