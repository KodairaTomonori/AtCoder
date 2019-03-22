array = list(map(str, range(1, 7)))
_array = list(map(str, range(1, 7)))
N = int(input()) % 30

for i in range(N):
  mod = i % 5
  l = mod
  r = mod + 1
  tmp = array[l]
  array[l] = array[r]
  array[r] = tmp
print("".join(array))
