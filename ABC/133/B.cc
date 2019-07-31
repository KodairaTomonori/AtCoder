#include <bits/stdc++.h>
#include <math.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int N, D;
  int X[10][10];
  cin >> N >> D;
  rep(i, N) {
    rep(j, D) {
      cin >> X[i][j];
    }
  }

  int ans = 0;
  rep(i, N-1) {
    for (int k = i + 1; k < N; k ++) {
      int distance = 0;
      rep(j, D) {
        int yz = X[i][j] - X[k][j];
        distance += yz * yz;
      }
      float dis = (int)(sqrt(distance));
      if (distance == dis * dis) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
