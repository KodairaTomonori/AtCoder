def qsort(A):
  size = len(A)
  for i in range(size):
    for j in range(i + 1, size):
      if A[i] < A[j]:
        tmp = A[i]
        A[i] = A[j]
        A[j] = tmp
  return A


if __name__ == "__main__":
  N = int(input())
  A = list(map(int, input().split()))
  A = qsort(A)
  print(sum(A[::2]) - sum(A[1::2]))
