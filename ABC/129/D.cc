#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


static int grid[2005][2005] = {};
static int L[2005][2005] = {};
static int R[2005][2005] = {};
static int D[2005][2005] = {};
static int U[2005][2005] = {};

int main() {
  int H, W;
  cin >> H >> W;

  rep(i, H) {
    string S;
    cin >> S;
    rep(j, W) {
      grid[i][j] = (S[j] == '.' ? 1 : -1);
    }
  }

  rep1(i, H) {
    int _i = H - i + 1;
    rep1(j, W) {
      int _j = W - j + 1;

      if (grid[i - 1][j - 1] != -1) {
        L[i][j] = L[i][j - 1] + 1;
        U[i][j] = U[i - 1][j] + 1;
      }
      if (grid[i - 1][_j - 1] != -1) R[i][_j] = R[i][_j + 1] + 1;
      if (grid[_i - 1][j - 1] != -1) D[_i][j] = D[_i + 1][j] + 1;
    }
  }
  int ans = 0;
  rep1(i, H) rep1(j, W) _max(ans, L[i][j] + R[i][j] + D[i][j] + U[i][j] - 3);
  cout << ans << endl;



  return 0;
}
