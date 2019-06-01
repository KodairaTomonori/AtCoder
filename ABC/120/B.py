A, B, K = map(int, input().split())
start = min(A, B)
AB = A, B

cnt = 0
for i in range(start, 0, -1):
  if all(x % i == 0 for x in AB):
    cnt += 1
    if cnt == K:
      break
print(i)
