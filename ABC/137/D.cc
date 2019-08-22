
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
using namespace std;

#define MAX_NUM 100000

vector<vector<int> > day2scores(MAX_NUM);


int main() {
  priority_queue<int> q;
  int n, m;
  long long ans = 0;

  cin >> n >> m;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    day2scores[a].push_back(b);
  }

  rep1(i, m) {
    vector<int> todays = day2scores[i];
    for (auto it = todays.begin(); it != todays.end(); it ++) {
      q.push(*it);
    }
    if (!q.empty()) {
      ans += q.top();
      q.pop();
    }
  }
  cout << ans << endl;

  return 0;
}
