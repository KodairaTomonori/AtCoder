N, K = map(int, input().split())
S = list(input().strip())
S[K-1] = S[K-1].lower()
print("".join(S))
