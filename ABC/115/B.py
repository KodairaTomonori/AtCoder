n = int(input().strip())
ans = 0
mp = 0
for i in range(n):
  p = int(input().strip())
  ans += p
  mp = max(mp, p)
ans -= (mp / 2)

print(int(ans))
