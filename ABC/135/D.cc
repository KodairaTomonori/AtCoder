#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define MOD 1000000007
using namespace std;





char S[100];
long long dp[100001][13];

int main() {
  map<char, int> m = {
    {'1', 1},
    {'2', 2},
    {'3', 3},
    {'4', 4},
    {'5', 5},
    {'6', 6},
    {'7', 7},
    {'8', 8},
    {'9', 9},
    {'?', -1}
  };
  scanf("%s", S);
  dp[0][0] += 1;

  rep(i, strlen(S)) {
    int n = m[S[i]];
    rep(j, 10) {
      if (n != -1 && n != j) continue;
      rep(ki, 13) {
        dp[i + 1][(ki * 10 + j) % 13] += dp[i][ki];
      }
    }
    rep(j, 13) dp[i + 1][j] %= MOD;
  }
  cout << dp[strlen(S)][5] << endl;
  return 0;
}
