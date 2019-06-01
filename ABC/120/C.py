import collections
counter = collections.Counter(input().strip())
print(min(counter['1'], counter['0']) * 2)
