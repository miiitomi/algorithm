def main():
    K, N = map(int, input().split())

    ans = 0
    for x in range(K+1):
        for y in range(K+1):
            if 0 <= N - x - y and N - x - y <= K:
                ans += 1

    print(ans)
    return

if __name__ == '__main__':
    main()