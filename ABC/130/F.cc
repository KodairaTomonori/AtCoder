#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define mins(x, y) x = min(x, y)
#define maxs(x, y) x = max(x, y)

using namespace std;

const double inf=1e9;

struct D {
  vector<double> low, high;
  D(): low(3, inf), high(3, -inf) {}

  void add(double x, int v) {
    ++v;
    mins(low[v], x);
    maxs(high[v], x);
  }

  double length(double t) {
    double min_low = inf, max_high = -inf;
    rep(i, 3) {
      mins(min_low,  low[i] + i * t);
      maxs(max_high, high[i] + i * t);
    }
    return max_high - min_low;
  }

  vector<double> events() {
    vector<double> ts;
    rep(i, 3)rep(j,i) {
      {
        double t = (low[j] - low[i]) / (i - j);
        if (t > 0) ts.push_back(t);
      }

      {
        double t = (high[j] - high[i]) / (i - j);
        if (t > 0) ts.push_back(t);
      }
    }
    return ts;
  }
};

int main() {
  int n;
  cin >> n;
  D xd, yd;
  rep(i, n) {
    int x, y;
    char d;
    cin >> x >> y >> d;
    switch (d) {
      case 'L': xd.add(x, -1), yd.add(y, 0); break;
      case 'R': xd.add(x, 1), yd.add(y, 0); break;
      case 'U': xd.add(x, 0), yd.add(y, 1); break;
      case 'D': xd.add(x, 0), yd.add(y, -1); break;
    }
  }
  vector<double> ts;
  ts.push_back(0);
  ts.push_back(inf);
  {
    auto nts = xd.events();
    ts.insert(ts.end(), nts.begin(), nts.end());
  }
  {
    auto nts = yd.events();
    ts.insert(ts.end(), nts.begin(), nts.end());
  }

  sort(ts.begin(), ts.end());
  double ans = 1e17;
  for (double t: ts) {
    double now = xd.length(t) * yd.length(t);
    mins(ans, now);
  }
  printf("%.10f\n", ans);
  return 0;

}
