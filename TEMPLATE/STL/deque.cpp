#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
  int a;
  deque<int> d;
  d.push_front(a); //insert a at begin
  d.front();       //refer to first element
  d.pop_front();   //delete first element
  d.push_back(a);  //insert a at the end
  d.back();        //refer to last element
  d.pop_back();    //delete last element
}