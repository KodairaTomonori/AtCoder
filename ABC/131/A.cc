
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int n, prev, now, flag = 0;
  cin >> n;
  prev = n % 10;
  n /= 10;
  rep(i, 3) {
    now = n % 10;
    n /= 10;
    if (prev == now) flag = 1;
    prev = now;
  }
  if (flag == 1) cout << "Bad" << endl;
  else cout << "Good" << endl;
  return 0;
}
