#include <stdio.h>
#include <math.h>


double distance(int x, int y) {
  return sqrt(x*x + y*y);
}

int main() {
  int i;
  int max_distance;
  int flag;

  int txa, txb, tya, tyb, T, V;
  int n;
  int x, y;
  double d;

  scanf("%d %d %d %d %d %d", &txa, &tya, &txb, &tyb, &T, &V);
  scanf("%d", &n);

  max_distance = T * V;
  flag=0;
  for (i=0; i<n; i++) {
    scanf("%d %d", &x, &y);
    d = distance(txa - x, tya - y) + distance(x - txb, y - tyb);
    if (d <= max_distance) {
      printf("YES\n");
      flag = 1;
      break;
    }
  }
  if (flag == 0) printf("NO\n");

  return 0;
}
