#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <cstdint>
#include <set>
#include <unordered_map>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());

int main()
{
  ll N, K;
  cin >> N >> K;

  vector<P> V(N);

  for (int i = 0; i < N; i++)
  {
    cin >> V[i].first >> V[i].second;
  }

  sort(V.begin(), V.end());

  for (int i = 0; i < N; i++)
  {
    if (V[i].first <= K)
    {
      K += V[i].second;
    }
    else
    {
      cout << K << endl;
      return 0;
    }
  }

  cout << K << endl;
  return 0;
}