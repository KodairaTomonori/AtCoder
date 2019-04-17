R, C = map(int, input().split())
sx, sy = map(lambda x: int(x) - 1, input().split())
gx, gy = map(lambda x: int(x) - 1, input().split())


maze = list()
memo = [[2500 for i in range(C)] for j in range(R)]

WALL = "#"

for i in range(R):
  maze.append(input().strip())
  for j, c in enumerate(maze[-1]):
    if c == WALL:
      memo[i][j] = -1


queue= [(sx, sy)]
memo[sx][sy] = 0


mawari = [(1, 0), (0, 1), (-1, 0), (0, -1)]


while queue:
# for i in range(20):
  x, y = queue.pop(0)
  now = memo[x][y]
  for i, j in mawari:
    _x, _y = x + i, y + j
    target = memo[_x][_y]
    if target > now:
      memo[_x][_y] = now + 1
      if (_x, _y) not in queue:
        queue.append((_x, _y))

print(memo[gx][gy])
