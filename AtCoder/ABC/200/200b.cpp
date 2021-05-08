#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;

  for (int i = 0; i < K; i++)
  {
    if (N % 200 == 0)
    {
      N = N / 200;
    }
    else
    {
      string S = to_string(N);
      S = S + "200";
      N = stoll(S);
    }
  }

  cout << N << endl;
  return 0;
}