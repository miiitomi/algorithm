#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    vector<int64_t> w(N), v(N);
    for (int i = 0; i < N; i++) cin >> w.at(i) >> v.at(i);

    vector<vector<int64_t>> dp(N+1, vector<int64_t>(W+1, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < W + 1; j++) {
            if (j < w.at(i)) {
                dp.at(i + 1).at(j) = dp.at(i).at(j);
            } else {
                dp.at(i + 1).at(j) = max(dp.at(i).at(j), dp.at(i).at(j - w.at(i))+v.at(i));
            }
        }
    }

    cout << dp.at(N).at(W) << endl;
}