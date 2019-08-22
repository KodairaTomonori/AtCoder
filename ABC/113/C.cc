
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
using namespace std;

typedef pair<int, int> P;

map<P, int> py2idx;
vector<P> pys;

vector<P> ans(100000);
int main() {
  int n, m; cin >> n >> m;
  rep(i, m) {
    int p, y; cin >> p >> y;
    P py = P(p, y);
    pys.push_back(py);
    py2idx[py] = i;
  }
  sort(pys.begin(), pys.end());
  int prev_p = -1;
  int first = 0, last = 1;
  for (P py: pys) {
    int p = py.first;
    if (p == prev_p) {
      last += 1;
    } else {
      first = p;
      last = 1;
    }
    ans[py2idx[py]] = P(first, last);
    prev_p = p;
  }
  rep(i, m) {
    printf("%06d%06d\n", ans[i].first, ans[i].second);
  }
  return 0;
}
