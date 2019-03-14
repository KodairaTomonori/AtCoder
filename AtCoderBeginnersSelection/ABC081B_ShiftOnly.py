N = int(input())
A = list(map(int, input().split()))

even_count = 0
while not sum(a % 2 for a in A):
  A = [a // 2 for a in A]
  even_count += 1

print(even_count)
