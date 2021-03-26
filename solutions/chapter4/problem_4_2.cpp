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