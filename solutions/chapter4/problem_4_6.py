def main():
    N, W = map(int, input().split())
    A = list(map(int, input().split()))
    memo = [[False]*(W+1) for _ in range(N+1)]
    memo[0][0] = True

    for i in range(N):
        for a in range(W+1):
            if not memo[i][a]:
                continue
            memo[i+1][a] = True
            if a + A[i] <= W:
                memo[i+1][a + A[i]] = True
    
    if memo[N][W]:
        print("Yes")
    else:
        print("No")

if __name__ == '__main__':
    main()