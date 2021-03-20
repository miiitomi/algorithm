def main():
    F = [0] * 50
    F[0] = 0
    F[1] = 1
    for N in range(2, 50):
        F[N] = F[N-1] + F[N-2]
        print(f"{N} 項目: {F[N]}")

if __name__ == '__main__':
    main()