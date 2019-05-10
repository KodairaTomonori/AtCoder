import std.stdio;
import std.algorithm;

void main() {
  int a, b, tmp;
  readf(" %s", &a);
  readf(" %s", &b);
  if (a > b) {
    tmp = a;
    a = b;
    b = tmp;
  }
  writeln(min(b - a, 10 + a - b));
}
