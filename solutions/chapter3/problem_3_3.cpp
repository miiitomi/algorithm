#include <iostream>
#include <vector>
using namespace std;
const int INF = 100000000;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    int min_value = INF;
    int min_index = -1;
    for (int i = 0; i < N; i++) {
        if (a.at(i) < min_value) {
            min_value = a.at(i);
            min_index = i;
        }
    }

    int second_min = INF;
    for (int i = 0; i < N; i++) {
        if (i == min_index) continue;
        if (a.at(i) < second_min) {
            second_min = a.at(i);
        }
    }

    cout << second_min << endl;
}