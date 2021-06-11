#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using Pis = pair<int, string>;

int main()
{
  int i;
  int j;
  vector<int> a(5);
  vector<vector<int>> v(5);
  vector<Pis> p(5);
  a.size();                                 //size of a
  a[i];                                     //access ith element
  a.front();                                //refer to top element
  a.back();                                 //refer to end element
  a.push_back(j);                           //add j element at the end ot a
  a.pop_back();                             //delete end element
  sort(a.begin(), a.end());                 //sort a by increment order
  sort(p.begin(), p.end(), greater<Pis>()); //sort a by decrement order
}