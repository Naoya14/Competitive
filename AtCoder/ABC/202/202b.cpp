#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>

using namespace std;

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
