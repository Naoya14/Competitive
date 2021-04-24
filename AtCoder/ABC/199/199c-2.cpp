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
  bool count_t = false;

  for (int i = 0; i < Q; i++)
  {
    cin >> T >> A >> B;
    if (T == 1)
    {
      if (!count_t)
      {
        char temp1 = S[A - 1];
        char temp2 = S[B - 1];
        S[B - 1] = temp1;
        S[A - 1] = temp2;
      }

      if (count_t)
      {
        if (A <= N)
        {
          A = N + A;
        }
        else if (A > N)
        {
          A = A - N;
        }

        if (B <= N)
        {
          B = N + B;
        }
        else if (B > N)
        {
          B = B - N;
        }

        char temp1 = S[A - 1];
        char temp2 = S[B - 1];
        S[B - 1] = temp1;
        S[A - 1] = temp2;
      }
    }

    if (T == 2)
    {
      count_t = !count_t;
    }
  }

  if (count_t)
  {
    string temp3 = S.substr(0, N);
    string temp4 = S.substr(N);
    S = "";
    S.append(temp4);
    S.append(temp3);
  }

  cout << S << endl;
  return 0;
}