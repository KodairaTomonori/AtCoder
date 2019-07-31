
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int N;
  cin >> N;
  vector<int> A;
  int ans[100000];

  ans[0] = 0;
  rep(i, N) {
    int a;
    cin >> a;
    A.push_back(a);
    if (i % 2 == 0) {
      ans[0] += a;
    } else {
      ans[0] -= a;
    }
  }

  rep1(i, N-1) {
    ans[i] = -ans[i - 1] + A[i - 1] * 2;
  }

  rep(i, N - 1) cout << ans[i] << " ";
  cout << ans[N - 1] << endl;

  return 0;
}
