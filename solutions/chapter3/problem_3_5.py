def main():
    N = int(input())
    A = list(map(int, input().split()))

    for i in range(100):
        for j in range(N):
            if A[j] % 2 == 1:
                print(i)
                return
            A[j] /= 2

if __name__ == '__main__':
    main()