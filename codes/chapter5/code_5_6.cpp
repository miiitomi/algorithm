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
vector<long long> h;
vector<long long> dp;

long long rec(int i) {
    if (dp.at(i) < INF) return dp.at(i);

    if (i == 0) return 0;

    long long res = INF;

    chmin(res, rec(i - 1) + abs(h.at(i) - h.at(i - 1)));

    if (i > 1) chmin(res, rec(i - 2) + abs(h.at(i) - h.at(i - 2)));

    return dp.at(i) = res;
}

int main() {
     cin >> N;
     h.resize(N);
     for (int i = 0; i < N; i++) cin >> h.at(i);

     dp.assign(N, INF);

     cout << rec(N - 1) << endl;
}