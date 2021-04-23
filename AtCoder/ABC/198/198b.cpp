#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
  string rs = s;
  reverse(rs.begin(), rs.end());
  return (s == rs);
}

int main()
{
  int n;
  cin >> n;

  if (n == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else
  {
    while (n % 10 == 0)
      n /= 10;
    if (isPalindrome(to_string(n)))
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}