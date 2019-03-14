if __name__ == "__main__":
  N = int(input())
  used = set()
  cnt = 0
  for i in range(N):
    d = int(input())
    if d not in used:
      cnt += 1
      used.add(d)
  print(cnt)
