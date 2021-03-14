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