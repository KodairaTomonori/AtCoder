N, M = map(int, input().split())

foots = (2, 3, 4)

if M < 2:
  print(-1, -1, -1)
  exit()

j = 0 if M % 2 == 0 else 1
M -= j * 3
N -= j

for i in range(N + 1):

  if i * 2 + (N - i) * 4 == M:
    print(i, j, N-i)
    break
  
else:
  print(-1, -1, -1)
