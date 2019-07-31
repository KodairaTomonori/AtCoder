#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int N;
  vector<int> D(100005, 1e5+1);
  cin >> N;
  rep (i, N) {
    cin >> D[i];
  }
  sort(D.begin(), D.end());
  // rep (i, N) {
  //   cout << D[i] << " ";
  // }
  cout << D[N / 2] - D[N / 2 - 1] << endl;
  return 0;
}
