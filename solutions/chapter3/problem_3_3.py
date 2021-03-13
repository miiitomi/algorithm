INF = 100000000

def main():
    N = int(input())
    a = list(map(int, input().split()))

    min_value = INF
    min_index = -1
    for i in range(N):
        if a[i] < min_value:
            min_value = a[i]
            min_index = i
    
    second_min = INF
    for i in range(N):
        if i == min_index:
            continue
        if a[i] < second_min:
            second_min = a[i]
    
    print(second_min)
    return

if __name__ == '__main__':
    main()