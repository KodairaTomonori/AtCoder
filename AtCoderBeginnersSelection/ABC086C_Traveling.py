N = int(input())


now = 0, 0, 0
for i in range(N):
  t, x, y = map(int, input().split())
  step = t - now[0]
  distance = abs(now[1] - x) + abs(now[2] - y)
  rest_step = step - distance
  if not (rest_step == 0 or (rest_step > 0 and rest_step % 2 ==0)):
    print("No")
    break
  now = t, x, y
else:
  print("Yes")

