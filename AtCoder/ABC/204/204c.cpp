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
using P = pair<int, int>;

// string : S.length(), reverse(S.begin(), S.end()), string(A, 'a')
// pair descrement sort : sort(V.begin(), V.end(), greater<pair<int, string>>());
// vector<vector<int>> V, V.resize(N)

const int MAX_N = 2000;
vector<vector<int>> V;
bool temp[MAX_N];
void dfs(int v)
{
  if (temp[v])
  {
    return;
  }
  temp[v] = true;
  for (auto vv : V[v])
  {
    dfs(vv);
  }
}

int main()
{
  int N, M;
  cin >> N >> M;
  V.resize(N);

  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    V[a - 1].push_back(b - 1);
  }

  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      temp[j] = false;
    }
    dfs(i);
    for (int j = 0; j < N; j++)
    {
      if (temp[j])
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
}