from math import comb

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    print(comb(10 - n, 2) * 6)
