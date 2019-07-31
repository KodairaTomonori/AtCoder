#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;

const int V = 100005;
vector<int> to[V * 2];
bool visited[V*2];


vector<int> cnt;
void dfs(int v) {
  if (visited[v]) return;
  visited[v] = true;
  cnt[v/V]++;
  for (int u: to[v]) dfs(u);
}

int main() {
  int N;
  int x, y;
  cin >> N;

  rep(i, N) {
    cin >> x >> y;
    y += V;
    to[x].push_back(y);
    to[y].push_back(x);
  }
  long long ans = 0;
  rep(i, V*2) {
    if (visited[i]) continue;
    cnt = vector<int>(2);
    dfs(i);
    ans += (long long)cnt[0] * cnt[1];
  }
  ans -= N;
  cout << ans << endl;
  return 0;
}
