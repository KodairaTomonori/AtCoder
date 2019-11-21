
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;

typedef pair<int, int> P;
vector<vector<int> > dp(3005, vector<int>(6005, 0));
vector<P> menus;
int ans;
int N, T;
int cnt;
void func(int i, int t, int score) {
  if (dp[i][t] >= score) return;
  if (t < 0) {
    //dp[i][3004] = max(dp[i][3004], score);
    _max(ans, score);
    return;
  }
  cnt ++;
  dp[i][t] = score;
  _max(ans, score);
  if (i == N) return;
  if (t != 0) {
    func(i + 1, t, score);
    func(i + 1, t - menus[i].first, score + menus[i].second);
  }
}

int main() {
  cin >> N >> T;
  menus.push_back(P(0, 0));
  P max_pair = P(0, 0);
  rep(i, N) {
    int A, B;cin >> A >> B;
    menus.push_back(P(A, B));
  }
  sort(menus.begin(), menus.end());
  int ans = 0;
  rep1(i, N) {
    int A = menus[i].first,  B = menus[i].second;
    // cout << A << " " << B << endl;
    rep1(t, T + 3001) {
      if (t - A < 0) {
        dp[i][t] = dp[i - 1][t];
      } else if (t - A < T) {
        dp[i][t] = max(dp[i - 1][t], dp[i - 1][t - A] + B);
      } else {
        dp[i][t] = max(dp[i][t - 1], dp[i-1][t]);
      }
      _max(ans, dp[i][t]);
    }
  }
   cout << ans << endl;
  return 0;
}

