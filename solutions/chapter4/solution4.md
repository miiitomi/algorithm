## 4.1
`problem_4_1.cpp`
```cpp
#include <iostream>
using namespace std;

int tribo(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    return tribo(n-1) + tribo(n-2) + tribo(n-3);
}

int main() {
    int N;
    cin >> N;
    cout << tribo(N) << endl;
}
```

`problem_4_1.py`
```python
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
```

## 4.2
`problem_4_2.cpp`
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> memo(N+1);

    for (int i = 0; i <= N; i++) {
        if (i <= 1) {
            memo[i] = 0;
            continue;
        } else if (i == 2) {
            memo[i] = 1;
            continue;
        }
        memo[i] = memo[i-1]+memo[i-2]+memo[i-3];
    }

    cout << memo[N] << endl;
}
```

`problem_4_2.py`
```python
def main():
    N = int(input())
    memo = [0] * (N+1)
    
    for i in range(N+1):
        if i <= 1:
            continue
        if i == 2:
            memo[i] = 1
            continue
        memo[i] = memo[i-1]+memo[i-2]+memo[i-3]
    
    print(memo[N])

if __name__ == '__main__':
    main()
```

## 4.3
数学的帰納法による.  
$N = 0$ の場合, $F_0 = \frac{1}{\sqrt{5}}\left((\frac{1+\sqrt{5}}{2})^0 - (\frac{1-\sqrt{5}}{2})^0\right) = 0$.  
$N = 1$ の場合, $F_1 = \frac{1}{\sqrt{5}}\left(\frac{1+\sqrt{5}}{2} - \frac{1-\sqrt{5}}{2}\right) = \frac{1}{\sqrt{5}}\cdot\frac{2\sqrt{5}}{2} = 1$.  
自然数 $N\ (\ge 2)$ に対し, 任意の$k \le N-1$についてフィボナッチ数列の第$k$項が, 
$F_k= \frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{k} - \left(\frac{1-\sqrt{5}}{2}\right)^{k}\right)$であると仮定する.
このとき, フィボナッチ数列の第$N$項は,  
$F_{N-1} + F_{N-2} = \frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{N-1} - \left(\frac{1-\sqrt{5}}{2}\right)^{N-1}\right) + \frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{N-2} - \left(\frac{1-\sqrt{5}}{2}\right)^{N-2}\right)$  
　　　　　　　 $=\frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{N-2}\left(\frac{1+\sqrt{5}}{2} +1 \right) - \left(\frac{1-\sqrt{5}}{2}\right)^{N-2}\left(\frac{1-\sqrt{5}}{2} + 1\right)\right)$  
　　　　　　　 $=\frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{N-2}\frac{3+\sqrt{5}}{2} - \left(\frac{1-\sqrt{5}}{2}\right)^{N-2}\frac{3-\sqrt{5}}{2}\right)$  
　　　　　　　 $=\frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{N-2}\left(\frac{1+\sqrt{5}}{2}\right)^2 - \left(\frac{1-\sqrt{5}}{2}\right)^{N-2}\left(\frac{1-\sqrt{5}}{2}\right)^2\right)$  
　　　　　　　 $=\frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{N} - \left(\frac{1-\sqrt{5}}{2}\right)^{N}\right)$  
となる.
したがって, フィボナッチ数列の一般項は $F_N = \frac{1}{\sqrt{5}}\left(\left(\frac{1+\sqrt{5}}{2}\right)^{N} - \left(\frac{1-\sqrt{5}}{2}\right)^{N}\right)$ である.

## 4.4
省略.

## 4.5
`problem_4_5.cpp`
```cpp
#include <bits/stdc++.h>
using namespace std;

int K;

int f(string n) {
    if (n != "") {
        if (stoll(n) > K) return 0;
    }

    bool three = false;
    bool five = false;
    bool seven = false;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '3') {
            three = true;
        } else if (n[i] == '5') {
            five = true;
        } else {
            seven = true;
        }
    }

    return (three && five && seven) + f('3'+n) + f('5'+n) + f('7'+n);
}

int main() {
    cin >> K;
    cout << f("") << endl;
}
```

`problem_4_5.py`
```python
K = 0

def f(n):
    if n != "":
        if int(n) > K:
            return 0
    
    three, five, seven = False, False, False

    for x in n:
        if x == '3':
            three = True
        elif x == '5':
            five = True
        else:
            seven = True
    
    return (three and five and seven) + f('3'+n) + f('5'+n) + f('7'+n)


def main():
    global K
    K = int(input())
    print(f(""))

if __name__ == '__main__':
    main()
```

## 4.6
`proble,4_6.cpp`
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<vector<bool>> memo(N+1, vector<bool>(W+1, false));
    memo[0][0] = true;

    for (int i = 0; i < N; i++) {
        for (int a = 0; a <= W; a++) {
            if (!memo[i][a]) {
                continue;
            }
            memo[i+1][a] = true;
            if (a + A[i] <= W) {
                memo[i+1][a + A[i]] = true;
            }
        }
    }

    if (memo[N][W]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
```

`problem_4_6.py`
```python
def main():
    N, W = map(int, input().split())
    A = list(map(int, input().split()))
    memo = [[False]*(W+1) for _ in range(N+1)]
    memo[0][0] = True

    for i in range(N):
        for a in range(W+1):
            if not memo[i][a]:
                continue
            memo[i+1][a] = True
            if a + A[i] <= W:
                memo[i+1][a + A[i]] = True
    
    if memo[N][W]:
        print("Yes")
    else:
        print("No")

if __name__ == '__main__':
    main()
```