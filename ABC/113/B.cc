#include <bits/stdc++.h>
#define rep1(i, n) for (int i=1; i <= n; i ++)
using namespace std;


int main() {
  int n; cin >> n;
  int t, a; cin >> t >> a;
  int ans = -1;
  double best = 100000000;

  rep1(i, n) {
    int h; cin >> h;
    double score = abs(a - (t - h * 0.006));
    if (score < best) {
      ans = i;
      best = score;
    }
  }
  cout << ans << endl;
  return 0;
}
