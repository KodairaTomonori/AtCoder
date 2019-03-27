target_str = "AC"

N, Q = map(int, input().split()) 
S = input().strip()

cumsum_list = [0 for i in range(N)]

cnt = 0
for i in range(N - 1):
  if S[i: i + 2] == target_str:
    cnt += 1
  cumsum_list[i] = cnt
cumsum_list.insert(0, 0)
cumsum_list.insert(0, 0)


for i in range(Q):
  l, r = map(int, input().split()) 
  print(cumsum_list[r] - cumsum_list[l])

