#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
using namespace std;


int main() {
  int N;
  int h;
  int max_height = 0;
  int sum_height = 0;
  int prev = 0;
  cin >> N;

  int ans = 0;
  rep(i, N) {
    cin >> h;
    if (prev > h) {
      ans += prev - h;
    }
    prev = h;
  }
  ans += prev;
  cout << ans << endl;
  return 0;
}
