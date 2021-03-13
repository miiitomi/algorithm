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