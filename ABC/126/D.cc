#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
using namespace std;
typedef pair<int, int> P;


int main() {
  int n;
  cin >> n;
  vector<int> ans(100005, -1);
  vector<vector<P> > to(100005, vector<P>());

  long long idx = 0;
  rep(i, n - 1) {
    int u, v, w;
    cin >> u >> v >> w;
    to[u].push_back(P(v, w % 2));
    to[v].push_back(P(u, w % 2));
  }
  queue<P> nodes;
  nodes.push(P(1, 0));
  while (!nodes.empty()) {
    const P node = nodes.front();
    nodes.pop();
    vector<P> tmp = to[node.first];
    int color = node.second;
    for (P next_node: tmp) {
      if (ans[next_node.first] != -1) continue;

      int next_color = (next_node.second + color) % 2;
      ans[next_node.first] = next_color;
      nodes.push(P(next_node.first, next_color));
    }
  }
  rep1(i, n) {
    cout << ans[i] << endl;
  }
  return 0;
}
