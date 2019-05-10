import std.stdio;
import std.algorithm;


void main() {
  long N, H, A, B, C, D, E;
  long ans, cost;
  long d;
  readf(" %s %s", &N, &H);
  readf(" %s %s %s %s %s", &A, &B, &C, &D, &E);
  ans = long.max;
  for (long b=0; b <= N; b ++) {
    d = max(0, ((N - b) * E - H - B*b) / (D + E) + 1);
    ans = min(ans, A*b+C*d);
  }
  writeln(ans);
}
