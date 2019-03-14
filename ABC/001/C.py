Deg, Dis = map(int, input().split())
directions = [
  "N", "NNE", "NE", "ENE",
  "E", "ESE", "SE", "SSE",
  "S", "SSW", "SW", "WSW",
  "W", "WNW", "NW", "NNW"
]
thretholds = [.3, 1.6, 3.4, 5.5, 8.0, 10.8, 13.9, 17.2, 20.8, 24.5, 28.5, 32.7]

ms = ((Dis / 6.0) + 0.5) / 10
W = 0
for thre in thretholds:
  if thre <= ms:
    W += 1
  else:
    break


span = 3600 / 16.0
half_span = span / 2.0
Dir = directions[int(((Deg + half_span) % 3600) / 225)] if W else "C"

print(Dir, W)
