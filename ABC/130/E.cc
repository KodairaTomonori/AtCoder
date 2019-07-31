#include <iostream>

using namespace std;

long long csum[2010][2010] = {0};
long long dp[2010][2010] = {0};
long denom = 1000000007;
int main() {
  int S[2001] = {0}, T[2001] = {0};
  int N, M;
  int _i, _j, i, j;
  cin >> N >> M;
  for (i = 1; i < N + 1; i ++) cin >> S[i];
  for (i = 1; i < M + 1; i ++) cin >> T[i];
  dp[0][0] = 1;

  for (i = 0; i < N + 1; i ++) csum[i][0] = 1;
  for (i = 0; i < M + 1; i ++) csum[0][i] = 1;

  for (i = 1; i < N + 1; i ++) {
    _i = i - 1;
    for (j = 1; j < M + 1; j ++) {
      _j = j - 1;
      if (S[i] == T[j]) {
        dp[i][j] = csum[_i][_j];
      }
      csum[i][j] = -csum[_i][_j];
      csum[i][j] = (csum[i][j] + csum[_i][j]) % denom;
      csum[i][j] = (csum[i][j] + csum[i][_j]) % denom;
      csum[i][j] = (csum[i][j] + dp[i][j]) % denom;
      if (csum[i][j] < 0) {
        csum[i][j] += denom;
      }
    }
  }
  cout << (csum[N][M]) % denom<< endl;;

  return 0;
}
