#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  long long A, B, C, D;
  long long CD;
  long long inv_ans = 0;
  cin >> A >> B >> C >> D;

  long long a = C, b = D;
  long long tmp = b % a;
  while (tmp != 0) {
    b = a;
    a = tmp;
    tmp = b % a;
  }
  CD = (C * D) / a;

  inv_ans += (B / C) - ((A - 1) / C);
  inv_ans += (B / D) - ((A - 1) / D);
  inv_ans -= (B / CD) - ((A - 1) / CD);
  cout << (B - A + 1) - inv_ans << endl;

  return 0;
}
