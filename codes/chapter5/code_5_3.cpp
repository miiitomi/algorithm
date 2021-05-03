#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}

const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;
    vector<long long> h(N);
    for (int i = 0; i < N; i++) cin >> h.at(i);

    vector<long long> dp(N, INF);

    dp.at(0) = 0;

    for (int i = 1; i < N; i++) {
        chmin(dp.at(i), dp.at(i-1) + abs(h.at(i) - h.at(i-1)));
        if (i > 1) {
            chmin(dp.at(i), dp.at(i-2)+abs(h.at(i)-h.at(i-2)));
        }
    }

    cout << dp.at(N-1) << endl;
}