N = int(input())
M = list(map(int, input().split()))


ans = 100 * 100 + 1
for i in range(1, N):
  ans = min(ans, abs(sum(M[:i]) - sum(M[i:])))

print(ans)
