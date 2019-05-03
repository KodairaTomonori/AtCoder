#include <stdio.h>


int main() {
  int n, a, i, ans;
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &a);
    while (a % 2 == 0 || a % 3 == 2) {
      a--;
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}
