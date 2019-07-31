#include <bits/stdc++.h>
#define rep(i, n) for (int i=1; i < n + 1; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int N, K;
  cin >> N >> K;

  int kakanai = K;
  int genkai = (N - 1) * (N - 2) / 2;
  int kaku = (N * (N - 1) / 2) - K;

  if (kakanai > genkai) {
    cout << -1 << endl;
  } else {
    cout << kaku << endl;

    int now = 0, prev = 0;
    for (int i = 1; i <= N; i ++) {
      for (int j = i + 1; j <= N; j ++) {
        if (kakanai == 0 || (i + 1 == (j) && i == 1) || (prev == N && i == 2)) {
          cout << i << " " << j << endl;
        } else {
          kakanai -= 1;
          now = j;
        }
      }
      prev = now;
    }
  }
  return 0;
}
