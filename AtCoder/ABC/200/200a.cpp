#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int ans = ((N - 1) / 100) + 1;

  cout << ans << endl;

  return 0;
}