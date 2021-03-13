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
using namespace std;
const int INF = 100000000;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    int min_value = INF;
    int min_index = -1;
    for (int i = 0; i < N; i++) {
        if (a.at(i) < min_value) {
            min_value = a.at(i);
            min_index = i;
        }
    }

    int second_min = INF;
    for (int i = 0; i < N; i++) {
        if (i == min_index) continue;
        if (a.at(i) < second_min) {
            second_min = a.at(i);
        }
    }

    cout << second_min << endl;
}
```

`problem_3_3.py`
```python
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
```