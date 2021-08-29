#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pis = pair<int, string>;
using Graph = vector<vector<int>>;

const int MOD = 1e9 + 7; // 1000000007;
const int INF = 1e9;     // 1000000000;
const ll LINF = 1e18;    // 1000000000000000000;

const int N = 8;
const vector<int> a = {1, 3, 5, 6, 10, 15, 20, 29, 39};

int binary_search(int key)
{
  int left = 0;
  int right = a.size() - 1;

  while (right >= left)
  {
    int mid = left + ((right - left) / 2);
    if (a[mid] == key)
    {
      return mid;
    }
    else if (a[mid] > key)
    {
      right = mid - 1;
    }
    else if (a[mid] < key)
    {
      left = mid + 1;
    }
    return -1;
  }
}

int main()
{
}