def main():
    N = int(input())
    memo = [0] * (N+1)
    
    for i in range(N+1):
        if i <= 1:
            continue
        if i == 2:
            memo[i] = 1
            continue
        memo[i] = memo[i-1]+memo[i-2]+memo[i-3]
    
    print(memo[N])

if __name__ == '__main__':
    main()