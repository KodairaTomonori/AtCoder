
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int n;
  int p[21];
  int cnt = 0;
  cin >> n;
  rep(i, n) {
    cin >> p[i];
  }
  for (int i = 1; i < n - 1; i ++) {
    if ((p[i - 1] < p[i] && p[i] < p[i + 1]) || 
        (p[i - 1] > p[i] && p[i] > p[i + 1])) {
      cnt += 1;
    }
  }
  cout << cnt << endl;
  return 0;
}
