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

// string : S.length() reverse(S.begin(), S.end())
// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());

int main()
{
  string S;
  cin >> S;

  for (int i = 0; i < S.length(); i++)
  {
    if (S[i] == '6')
    {
      S[i] = '9';
      continue;
    }
    if (S[i] == '9')
    {
      S[i] = '6';
      continue;
    }
  }

  reverse(S.begin(), S.end());
  cout << S << endl;
  return 0;
}