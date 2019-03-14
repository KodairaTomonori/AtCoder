m = int(input()) / 1000.0

ans = 0.0
if 0.1 <= m <= 5:
  ans = m * 10
elif 6 <= m <= 30:
  ans = m + 50
elif 35 <= m <= 70:
  ans = (m - 30) / 5 + 80
elif 70 < m:
  ans = 89.0

print("{:02.0f}".format(ans))
