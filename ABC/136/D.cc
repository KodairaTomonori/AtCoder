
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;

const int LENGTH = 100005;

int main() {
  vector<int> l(LENGTH, 0), r(LENGTH, 0);
  string S;
  cin >> S;
  int r_cnt = 0;
  int l_cnt = 0;
  char prev = 'a';
  int l_idx = 0;

  rep(i, S.length()) {
    char c = S[i];
    if (c == 'R') {
      if (prev != c && i != 0) {
        r_cnt = 0;

        int half_l_cnt = l_cnt / 2;
        l[l_idx] = half_l_cnt + (l_cnt % 2 == 0 ? 0 : 1);
        l[l_idx - 1] = half_l_cnt;
      }
      r_cnt += 1;
    } else if (c == 'L') {
      if (prev != c){
        l_cnt = 0;
        l_idx = i;

        int half_r_cnt = r_cnt / 2;
        r[i - 1] = half_r_cnt + (r_cnt % 2 == 0 ? 0 : 1);
        r[i] = half_r_cnt;
      }
      l_cnt += 1;
    }
    prev = c;
  }
  int half_l_cnt = l_cnt / 2;
  l[l_idx] = half_l_cnt + (l_cnt % 2 == 0 ? 0 : 1);
  l[l_idx - 1] = half_l_cnt;

  rep(i, S.length() - 1) {
    cout << l[i] + r[i] << " ";
  }
  int last_idx = S.length() - 1;
  cout << l[last_idx] + r[last_idx] << endl;


  return 0;
}
