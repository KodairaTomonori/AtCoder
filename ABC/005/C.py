T = int(input())
N = int(input())
A = list(map(int, input().split()))
invA = A[::-1]
M = int(input())
if N < M:
  print("no")
  exit()

stock = list()
for B in map(int, input().split()):

  for i in range(len(invA) - 1, -1, -1):
    if invA[i] <= B:
      stock.append(invA.pop(i))
    else:
      break

  for i, t in enumerate(stock):
    if (B - t) <= T:
      stock = stock[i + 1:]
      break
  else:
    print("no")
    break
else:
  print("yes")
