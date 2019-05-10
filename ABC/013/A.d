import std.stdio;

void main() {
  char X;
  readf("%s", &X);
  writeln(cast(int)(X) - cast(int)('A') + 1);
}
