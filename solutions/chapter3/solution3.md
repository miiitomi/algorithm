# 第3章 章末問題 回答例
## 3.1
 - 省略.

## 3.2
 - `problem_3_2.cpp`
    ```
    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        int N, v;
        cin >> N >> v;
        vector<int> a(N);
        for (int i = 0; i < N; i++) cin >> a[i];

        int ans = 0;
        for (int i = 0; i < N; i++) {
            if (a[i] == v) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    ```

 - `problem_3_2.py`
    ```
    def main():
        N, v = map(int, input().split())
        a = list(map(int, input().split()))

        ans = 0
        for i in range(N):
            if a[i] == v:
                ans += 1
        
        print(ans)
        return

    if __name__ == '__main__':
        main()
    ```