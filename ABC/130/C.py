W, H, x, y = map(int, input().split())

area = W * H / 2
multi = 1 if (W / 2 == x and H / 2 == y) else 0

print(area, multi)
