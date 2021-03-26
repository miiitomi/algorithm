
def tribo(n):
    if n == 0 or n == 1:
        return 0
    elif n == 2:
        return 1
    return tribo(n-1)+tribo(n-2)+tribo(n-3)

def main():
    N = int(input())
    print(tribo(N))

if __name__ == '__main__':
    main()