#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    int first_min = min(a.at(0), a.at(1));
    int second_min = max(a.at(0), a.at(1));

    for (int i = 2; i < N; i++) {
        if (a.at(i) < first_min) {
            second_min = first_min;
            first_min = a.at(i);
        } else if (a.at(i) < second_min) {
            second_min = a.at(i);
        }
    }

    cout << second_min << endl;
}