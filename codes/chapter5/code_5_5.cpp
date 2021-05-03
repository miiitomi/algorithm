#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}

const long long INF = 1LL << 60;

int N;
vector<long long> h(0);

long long rec(int i) {
    if (i == 0) return 0;

    long long res = INF;

    chmin(res, rec(i-1)+abs(h.at(i)-h.at(i-1)));

    if (i > 1) chmin(res, rec(i-2)+abs(h.at(i)-h.at(i-2)));

    return res;
}

int main() {
    cin >> N;
    long long h_new;
    for (int i = 0; i < N; i++) {
        cin >> h_new;
        h.push_back(h_new);
    }

    cout << rec(N-1) << endl;
}