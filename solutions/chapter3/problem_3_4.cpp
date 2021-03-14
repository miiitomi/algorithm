#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a.at(i);

    int max_value = a.at(0);
    int min_value = a.at(0);
    for (int i = 0; i < N; i++) {
        if (max_value < a.at(i)) max_value = a.at(i);
        if (min_value > a.at(i)) min_value = a.at(i);
    }
    
    cout << max_value - min_value << endl;
}