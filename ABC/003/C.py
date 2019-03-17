
def qsort(R):
  length = len(R)
  for i in range(length):
    for j in range(i + 1, length):
      if R[i] < R[j]:
        tmp = R[i]
        R[i] = R[j]
        R[j] = tmp
  return R


_, K = map(int, input().split())
R = qsort(list(map(int, input().split())))

rate = 0
for r in R[:K][::-1]:
  rate = (r + rate) / 2
print(rate)
