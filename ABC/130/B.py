N, X = map(int, input().split())
L = [0] + list(map(int, input().split()))

D = 0

cnt = 0
for i in L:
  D += i
  if D <= X:
    cnt += 1
print(cnt)
