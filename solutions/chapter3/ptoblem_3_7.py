def main():
    S = str(input())
    N = len(S)

    ans = 0

    for bit in range(1<<(N-1)):
        x = ''
        for i in range(N):
            x += S[i]
            if bit & (1<<i):
                ans += int(x)
                x = ''
        ans += int(x)
    
    print(ans)
    return

if __name__ == '__main__':
    main()