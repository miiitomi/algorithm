def main():
    N = int(input())
    a = list(map(int, input().split()))

    first_min = min(a[0], a[1])
    second_min = max(a[0], a[1])

    for i in range(2, N):
        if a[i] < first_min:
            second_min = first_min
            first_min = a[i]
        elif a[i] < second_min:
            second_min = a[i]

    print(second_min)
    return

if __name__ == '__main__':
    main()