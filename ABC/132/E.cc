#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;
typedef pair<int, int> P;


int route[100005][3];

const int INF = 1000000000;



int main() {
  vector<vector<int> > path(100000);
  int N, M;
  cin >> N >> M;
  rep(i, N + 5) rep(j, 3) route[i][j] = INF;

  rep(i, M) {
    int u, v;
    cin >> u >> v;
    path[u].push_back(v);
  }
  int S, T;
  cin >> S >> T;

  queue<P> q;
  q.push(make_pair(S, 0));

  while (!q.empty()) {
    int node = q.front().first;
    int step = q.front().second;
    q.pop();
    // cout << node << endl;
    for (int n: path[node]) {
      int mod_step = ((step + 1) % 3);
      // cout << ": " << n << ", mod_step: " << mod_step << endl;
      if (route[n][mod_step] != INF) continue;
      route[n][mod_step] = step + 1;
      q.push(make_pair(n, step + 1));

    }
  }
  cout << (route[T][0] == INF ? -1 : (route[T][0]  / 3)) << endl;

  return 0;
}
