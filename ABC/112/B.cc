
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
using namespace std;


int main() {
  int n, T;
  cin >> n >> T;
  int best = 10000;
  rep(i, n) {
    int c, t; cin >> c >> t;
    if (t <= T) {
      _min(best, c);
    }
  }
  if (best == 10000) {
    cout << "TLE" << endl;
  } else {
    cout << best << endl;
  }
  return 0;
}
