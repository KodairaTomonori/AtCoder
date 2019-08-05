#include <bits/stdc++.h>
using namespace std;


int main() {
  int a, b;
  cin >> a >> b;
  int tmp;
  if (a > b) {
    tmp = a;
    a = b;
    b = tmp;
  }
  if ((b - a) % 2 == 1) {
    cout << "IMPOSSIBLE" << endl;
  } else {
    cout << (b - a) / 2 + a  << endl;
  }

  return 0;
}
