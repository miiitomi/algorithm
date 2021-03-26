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