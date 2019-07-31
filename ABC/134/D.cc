
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int M;
  vector<int> B(200005, 0);
  vector<bool> exist(200005, false);
  vector<int> ans;
  cin >> M;
  rep1(i, M) {
    int b;
    cin >> b;
    B[i] = b;
  }
  for (int i = M; i > 0; i --) {
    int b = B[i];
    int cnt = 0;
    int mul = i * 2;
    while(mul <= M) {
      if (exist[mul]) cnt += 1;
      mul += i;
    }
    if ((cnt % 2) != b) {
      exist[i] = true;
      ans.push_back(i);
    }

  }
  int a_len = ans.size();
  cout << a_len << endl;
  if (a_len != 0) {
    rep(i, a_len-1) {
      cout << ans[i] << " ";
    }
    cout << ans[a_len-1] << endl;
  }


  return 0;
}
