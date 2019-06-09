import copy
N, M = map(int, input().split())
A = sorted(map(int, input().split()))

digit2match_num = {i:j for i, j in zip(range(1, 10), [2,5,5,4,5,6,3,7,6])}

match_nums = sorted({digit2match_num[d]: d for d in A}.items())

rest = N


pattern_num = len(match_nums)
i = 0

ans = []

match_num, digit = match_nums[i]
n, rest = divmod(rest, match_num)
ans += [digit] * n

def make_tail(rest_match_num, ans):
  queue = [
    [[], rest_match_num]
  ]
  _ans = copy.copy(ans)
  flag = False
  tail = []
  for i in range(min(len(ans), 5)):
    new_queue = list()
    last_digit = ans.pop()
    last_match_num = digit2match_num[last_digit]
    for nums, rest_match_num in queue:
      rest_match_num += last_match_num
      new_queue.append([nums, rest_match_num])
      for match_num, digit in match_nums:
        if match_num <= rest_match_num:
          if rest_match_num == match_num:
            tail.append(
              sorted((ans + nums + [digit]), reverse=True)
            )
          elif match_num != last_match_num:
            new_queue.append([nums + [digit], rest_match_num - match_num])
        else:
          break
    queue = new_queue
  best = sorted(tail, key=lambda x: (len(x), x), reverse=True)[0]

  return best

# print(ans, rest)
try:
  if rest != 0:
    ans = make_tail(rest, ans)
  print("".join(map(str, sorted(ans, reverse=True))))
except:
  print("X")
