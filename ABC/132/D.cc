#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;



const int mod = 1000000007;

struct mint {
  long long x;
  mint(long long x=0):x(x%mod){}
  mint& operator+=(const mint a) {
     (x += a.x) %= mod;
     return *this;
  }
  mint& operator-=(const mint a) {
     (x += (mod - a.x)) %= mod;
     return *this;
  }
  mint& operator*=(const mint a) {
     (x *= a.x) %= mod;
     return *this;
  }
  mint& operator/=(const mint a) {
     (x /= a.x) %= mod;
     return *this;
  }
  mint operator+(const mint a) {
    mint res(*this);
    return res += a;
  }
  mint operator-(const mint a) {
    mint res(*this);
    return res -= a;
  }
  mint operator*(const mint a) {
    mint res(*this);
    return res *= a;
  }
  mint operator/(const mint a) {
    mint res(*this);
    return res /= a;
  }
};



mint C[5000][5000];
void init() {
  C[0][0] = 1;
  rep(i, 4005) {
    rep(j, 4005) {
      C[i + 1][j] += C[i][j];
      C[i + 1][j + 1] += C[i][j];
    }
  }
}


mint comb(int n, int k) {
  return C[n][k];
}

mint f2(int n, int k) {
  return comb(n + k - 1, k - 1);
}

mint f(int n, int k) {
  if (n == 0 && k == 0) return 1;
  if (n < k || k < 1) return 0;
  return f2(n - k, k);
}




int main() {
  int n, k;
  int red, blue;
  cin >> n >> k;
  init();
  // rep(i, 5) {
  // rep(j, 5) {
  //   cout << C[i][j] << " ";
  // }
  // cout << endl;

  // }

  blue = k;
  red = n - k;

  // printf("red: %d, blue: %d\n", red, blue);
  rep1(i, k) {
    mint blue_pattern = f(blue, i);
    mint red_pattern = f2(red - (i - 1), i + 1);
    // cout << "red: " << red_pattern << "blue: " << blue_pattern << endl;
    mint ans = red_pattern * blue_pattern;
    cout << ans.x << endl;
  }
  return 0;
}
