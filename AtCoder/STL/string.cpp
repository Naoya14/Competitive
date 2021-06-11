#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  int i, k;
  string s, t;
  cin >> s;
  cout << s << endl;
  s = s + t;                   //concatenate s and t
  s == t;                      //comparison
  s.length();                  //length
  s[i];                        //refer to ith string
  s.substr(i, k);              //copying of string start from pos and done till pos+len
  s.find(t);                   //if there is a character string t in s, the address at the beginning of it is returned
  s.replace(i, k, t);          //replace the k characters after the ith with the character string t
  s.insert(i, t);              //insert the string t before the ith character
  reverse(s.begin(), s.end()); //reverse the string
  stoll(s);                    //change string to long long
  string(5, 'a');              //create 5 a string
  swap(s[0], s[3]);            //swap position 0 and 3
}