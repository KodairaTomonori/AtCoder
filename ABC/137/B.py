min_x = -1000000
max_x = 1000000

k, x = map(int, input().split())

print(*range(x - k + 1, x + k), sep=" ")

