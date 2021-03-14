def main():
    N = int(input())
    a = list(map(int, input().split()))

    max_value = a[0]
    min_value = a[0]

    for x in a:
        if max_value < x:
            max_value = x
        if min_value > x:
            min_value = x
    
    print(max_value - min_value)
    return

if __name__ == '__main__':
    main()