#include <bits/stdc++.h>
using namespace std;


int main() {
  long long L, R;
  long long min_i = 2019, min_j = 2019;
  cin >> L >> R;

  long long ans = 2019;
  if (R - L <= 2020) { 
    for (long long i=L; i < R; i ++) {
      for (long long j=i + 1; j <= R; j ++) {
        // cout << i * j << " " << i << " * " << j << " = " << i * j % 2019 << endl;
        ans = min(i * j % 2019, ans);
      }
    }
  } else {
    ans = 0;
  }
  cout << ans << endl;
  return 0;
}
