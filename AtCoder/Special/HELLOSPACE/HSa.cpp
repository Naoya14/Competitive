#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <regex>

using namespace std;

std::vector<int> find_all(const std::string str, const std::string subStr)
{
  std::vector<int> result;

  int subStrSize = subStr.size();
  int pos = str.find(subStr);

  while (pos != std::string::npos)
  {
    result.push_back(pos);
    pos = str.find(subStr, pos + subStrSize);
  }

  return result;
}

int main()
{
  string S;
  cin >> S;

  string Z = "ZONe";

  vector<int> find = find_all(S, Z);

  cout << find.size() << endl;
  return 0;
}