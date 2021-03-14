## 3.1
省略.

## 3.2
`problem_3_2.cpp`
```cpp
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

`problem_3_2.py`
```python
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

## 3.3
`problem_3_3.cpp`
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    int first_min = min(a.at(0), a.at(1));
    int second_min = max(a.at(0), a.at(1));

    for (int i = 2; i < N; i++) {
        if (a.at(i) < first_min) {
            second_min = first_min;
            first_min = a.at(i);
        } else if (a.at(i) < second_min) {
            second_min = a.at(i);
        }
    }

    cout << second_min << endl;
}
```

`problem_3_3.py`
```python
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
```

## 3.4
`problem_3_4.cpp`
```cpp
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    int max_value = a.at(0);
    int min_value = a.at(0);
    for (int i = 0; i < N; i++) {
        if (max_value < a.at(i)) max_value = a.at(i);
        if (min_value > a.at(i)) min_value = a.at(i);
    }
    
    cout << max_value - min_value << endl;
}
```

`problem_3_4.py`
```python
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
```

## 3.5
`problem_3_5.cpp`
```cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < N; j++) {
            if (A.at(j) % 2 == 1) {
                cout << i << endl;
                return 0;
            } 
            A.at(j) /= 2;
        }
    }
}
```

`problem_3_5.py`
```python
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
```

## 3.6
`problem_3_6.cpp`
```cpp
#include <iostream>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    int ans = 0;
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            if (0 <= N - x - y && N - x - y <= K) ans++;
        }
    }
    cout << ans << endl;
}
```

`problem_3_6.py`
```python
def main():
    K, N = map(int, input().split())

    ans = 0
    for x in range(K+1):
        for y in range(K+1):
            if 0 <= N - x - y and N - x - y <= K:
                ans += 1

    print(ans)
    return

if __name__ == '__main__':
    main()
```

## 3.7
`problem_3_7.cpp`
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    int64_t ans = 0LL;

    for (int bit = 0; bit < (1<<(N-1)); bit++) {
        string x = "";
        for (int i = 0; i < N; i++) {
            x += S.at(i);
            if (bit & (1<<i)) {
                ans += stoll(x);
                x = "";
            }
        }
        ans += stoll(x);
    }
    cout << ans << endl;
}
```

`problem_3_7.py`
```python
def main():
    S = str(input())
    N = len(S)

    ans = 0

    for bit in range(1<<(N-1)):
        x = ''
        for i in range(N):
            x += S[i]
            if bit & (1<<i):
                ans += int(x)
                x = ''
        ans += int(x)
    
    print(ans)
    return

if __name__ == '__main__':
    main()
```