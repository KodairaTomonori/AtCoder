n = int(input())

a = [0, 0, 1]

if n <= 3:
  print(a[n - 1])
else:
  for i in range(n - 3):
    a.append(sum(a[-3:]) % 10007)
  print(a[-1] % 10007)
