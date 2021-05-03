#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; i++) cin >> h.at(i);

    vector<int> dp(N, 0);
    for (int i = 1; i < N; i++) {
        if (i == 1) {
            dp.at(i) = abs(h.at(i)-h.at(i-1));
        } else {
            dp.at(i) = min(dp.at(i-1)+abs(h.at(i)-h.at(i-1)), dp.at(i-2)+abs(h.at(i)-h.at(i-2)));
        } 
    }
    
    cout << dp.at(N-1) << endl;
}