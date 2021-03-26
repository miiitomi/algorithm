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