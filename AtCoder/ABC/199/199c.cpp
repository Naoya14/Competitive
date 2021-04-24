#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int N;
  string S;
  int Q;
  cin >> N;
  cin >> S;
  cin >> Q;

  int T, A, B;
  int exT = 0;
  int count = 0;

  for (int i = 0; i < Q; i++)
  {
    scanf("%d%d%d", &T, &A, &B);
    if (T == 1 && (count % 2) == 1 && exT == 2)
    {
      string temp1 = S.substr(0, N);
      string temp2 = S.substr(N);
      S = "";
      S.append(temp2);
      S.append(temp1);
      char temp3 = S[A - 1];
      char temp4 = S[B - 1];
      S[B - 1] = temp3;
      S[A - 1] = temp4;
      count = 0;
    }
    else if (T == 1)
    {
      char temp3 = S[A - 1];
      char temp4 = S[B - 1];
      S[B - 1] = temp3;
      S[A - 1] = temp4;
    }

    exT = T;
    if (T == 2)
    {
      count++;
    }

    if (i == Q - 1 && T == 2)
    {
      string temp1 = S.substr(0, N);
      string temp2 = S.substr(N);
      S = "";
      S.append(temp2);
      S.append(temp1);
    }
  }

  cout << S << endl;
  return 0;
}