
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


const int MOD = 1000000007;

// a^n mod を計算する
long long modpow(long long a, long long n) {
  long long res = 1;
  while (n > 0) {
    if (n & 1) {
      res = res * a % MOD;
    }
    a = a * a % MOD;
    n >>= 1;
  }
  return res;
}

long long modinv(long long a) {
  return modpow(a, MOD - 2);
}


int main() {
  int X, Y; cin >> X >> Y;
  if (X > Y) {
    int tmp = Y;
    Y = X;
    X = tmp;
  }
  int cnt = 0;
  while (X * 2 != Y && X > 0 && Y > 0 && X != Y * 2) {
    X -= 1;
    Y -= 2;
    cnt ++;
  }
  if (X > Y) {
    int tmp = Y;
    Y = X;
    X = tmp;
  }
  if (X * 2 != Y) {
    cout << 0 << endl;
    return 0;
  }
  long long ans = 1;
  rep1(i, X + cnt) {
    ans = ans * i % MOD;
  }
  rep1(i, X) {
    ans = ans * modinv(i) % MOD ;
  }
  rep1(i, cnt) {
    ans = ans * modinv(i) % MOD;
  }

  cout << ans << endl;
  return 0;
}
