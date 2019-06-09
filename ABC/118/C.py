N = int(input())
A = sorted(set(map(int, input().split())))


memo = dict()

def euclidean_algorithm(a, b):
  while True:
    if a > b:
      a, b = b, a
    div, mod = divmod(b, a)
    if mod == 0:
      break
    b = mod
  return a

N = len(A)
ans = A[0]
for i in A[1:]:
  ans = euclidean_algorithm(ans, i)

print(ans)
