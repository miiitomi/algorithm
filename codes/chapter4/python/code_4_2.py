def func(N):
    # 再帰関数を呼び出したことを報告
    print(f"func({N}) を呼び出しました")

    if N == 0:
        return 0
    
    result = N + func(N-1)
    print(f"{N} までの和 = {result}")

    return result

def main():
    func(5)

if __name__ == '__main__':
    main()