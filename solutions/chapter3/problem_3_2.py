def main():
    N, v = map(int, input().split())
    a = list(map(int, input().split()))

    ans = 0
    for i in range(N):
        if a[i] == v:
            ans += 1
    
    print(ans)
    return

if __name__ == '__main__':
    main()