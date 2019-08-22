import collections
n = int(input())



stock = collections.Counter()
ans = 0


for i in range(n):
  str = tuple(sorted(collections.Counter(input().strip()).items()))
  ans += stock[str]
  stock[str] += 1

print(ans)
