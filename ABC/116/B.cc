#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


long f(long n) {
  if (n % 2 == 0) return n / 2;
  else return 3 * n + 1;
}


int main() {
  long a;
  vector<long> memo((int)(1e6 + 2), -1);
  cin >> a;
  memo[a] = 1;

  long prev = a;
  for (long i = 2;; i ++) {
    a = f(prev);
    if (memo[a] != -1) {
      cout << i << endl;
      break;
    }
    memo[a] = i;
    prev = a;
  }
  return 0;
}
