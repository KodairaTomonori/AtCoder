N, M = map(int, input().split())

ids = [0 for i in range(N + 2)]
for i in range(M):
  L, R = map(int, input().split())
  ids[L] += 1
  ids[R+1] -= 1

prev = 0
cnt = 0 
for i in ids:
  prev = i + prev
  if prev == M:
    cnt += 1
print(cnt)

