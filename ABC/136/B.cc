#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
using namespace std;


int main() {
  int N;
  cin >> N;
  int cnt = 0;
  for (int i = N; i > 0; i --) {
    if (i < 10 || (i / 100 < 10 && i >= 100) || (i / 10000 < 10 && i >= 10000)) {
      cnt += 1;
    }
  }
  cout << cnt << endl;

  return 0;
}
