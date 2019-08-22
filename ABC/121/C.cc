#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
using namespace std;
typedef pair<long long, long long> P;

int main() {
  long long n, m;
  cin >> n >> m;
  vector<P> drink_stock_pairs;

  rep(i, n) {
    long long a, b;
    cin >> a >> b;
    drink_stock_pairs.push_back(P(a, b));
  }
  sort(drink_stock_pairs.begin(), drink_stock_pairs.end());
  long long ans = 0;
  rep(i, n) {
    long long a = drink_stock_pairs[i].first;
    long long b = drink_stock_pairs[i].second;
    ans += a * min(b, m);
    m -= b;
    if (m <= 0) break;
  }
  cout << ans << endl;
  return 0;
}
