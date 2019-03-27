N = int(input())
B = list(map(int, input().split()))


inv_output = list()
for i in range(N, 0, -1):
  for j in range(i, 0, -1):
    if B[j - 1] == j:
      inv_output.append(B.pop(j - 1))
      break
  else:
    print(-1)
    break
else:
  for i in inv_output[::-1]:
    print(i)
