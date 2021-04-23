#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N;
  cin >> N;

  if (N == 1)
  {
    cout << 0 << endl;
    return 0;
  }
  else
  {
    cout << (N - 2) + 1 << endl;
    return 0;
  }
}