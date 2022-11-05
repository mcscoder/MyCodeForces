t = int(input())

for _ in range(t):
    n = int(input())
    arr = [[0 for __ in range(n)] for ___ in range(n)]
    for i in range(n):
        arr[i][0] = 1
        arr[i][i] = 1    
    
    for i in range(n):
        for j in range(i + 1):
            print(arr[i][j], end=" ")
        print()
