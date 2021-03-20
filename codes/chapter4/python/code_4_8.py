memo = [-1] * 50

def fibo(N):
    if N == 0:
        return 0
    elif N == 1:
        return 1
    
    if memo[N] == -1:
        memo[N] = fibo(N-1) + fibo(N-2)
    
    return memo[N]

def main():
    fibo(49)

    for N in range(2, 50):
        print(f"{N} 項目: {memo[N]}")
    
if __name__ == '__main__':
    main()