N, M = map(int, input().split())


def make_faction(id2known, i=1, faction=set(), cnt=0):
  if i in id2known:
    if i not in faction or cnt == 0:
      yield from make_faction(id2known, i=i + 1, faction=faction, cnt=cnt)
    if i in faction:
      yield from make_faction(id2known, i=i + 1, faction=faction & id2known[i], cnt=cnt + 1)
      yield from make_faction(id2known, i=i + 1, faction=faction.difference([i]), cnt=cnt)
  else:
    if cnt == len(faction):
      yield len(faction)


id2known = {i+1: set([i+1]) for i in range(N)}
for _ in range(M):
  x, y = map(int, input().split())
  id2known[x].add(y)
  id2known[y].add(x)
num = max(make_faction(id2known, faction=set(id2known.keys())))
print(num)
