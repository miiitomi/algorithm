def main():
    N = int(input())
    a = list(map(int, input().split()))

    min_value = 20000000
    for i in range(N):
        if a[i] < min_value:
            min_value = a[i]
    
    print(min_value)
    return

if __name__ == '__main__':
    main()