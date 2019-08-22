
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;

// 0 <= Cx <= 100
// 0 <= Cy <= 100
// 1 <= H


vector<vector<int> > points;

int main() {
  int n; cin >> n;
  rep (i, n) {
    int x, y, h;
    cin >> x >> y >> h;
    vector<int> point;
    point.push_back(h);
    point.push_back(x);
    point.push_back(y);
    points.push_back(point);
  }
  sort(points.begin(), points.end());
  reverse(points.begin(), points.end());
  rep(i, 101) {
    rep(j, 101) {
      int prev_h = -1;
      bool flag = true;
      rep (k, n) {
        int x, y, h;
        x = points[k][1];
        y = points[k][2];
        h = points[k][0];
        if (h == 0) {
          if (max(prev_h - abs(x - i) - abs(y - j), 0) == 0) {
            continue;
          } else {
            flag = false;
            break;
          }
        }

        int H = h + abs(x - i) + abs(y - j);
        if (prev_h == -1) {
          prev_h = H;
        } else if (prev_h != H) {
          flag = false;
          break;
        }
      }
      if (flag) {
        cout << i << " " << j << " " << prev_h << endl;
        return 0;
      }
    }
  }
  return 0;
}
