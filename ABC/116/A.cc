#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)

using namespace std;

int main() {
  vector<double> edges(3);
  rep(i, 3) cin >> edges[i];
  sort(edges.begin(), edges.end());
  cout << edges[0] * edges[1] / 2 << endl;
}
