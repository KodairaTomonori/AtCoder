#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
using namespace std;


int main() {
  int N;
  cin >> N;
  int min_v = 0;
  bool flag = true;

  rep(i, N) {
    int h;
    cin >> h;
    if (h == min_v) {
      continue;
    } else if (h > min_v) {
      min_v = h - 1;
    } else {
      flag = false;
      break;
    }
  }
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}
