N = int(input())

ans = 0
for i in range(N):
  x, u = input().strip().split()
  if u == "JPY":
    ans += int(x)
  else:
    ans += float(x) * 380000.0

print(ans)
