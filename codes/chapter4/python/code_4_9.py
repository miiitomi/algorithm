def func(i, w, a):
    if i == 0:
        if w == 0:
            return True
        else:
            return False
    
    return func(i - 1, w, a) or func(i - 1, w - a[i - 1], a)

def main():
    N, W = map(int, input().split())
    a = list(map(int, input().split()))
    print(func(N, W, a))

if __name__ == '__main__':
    main()