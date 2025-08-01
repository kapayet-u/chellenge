#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    vector<int> B(n);
    for (int i = 0; i < n; ++i) {
        B[i] = A[i] % 10;
    }
    
    vector<int> freq(10, 0);
    vector<int> medians;
    
    for (int i = 0; i < n; ++i) {
        freq[B[i]]++;
        int size = i + 1;
        int median_pos = (size - 1) / 2;
        int count = 0;
        int median = 0;
        for (int j = 0; j < 10; ++j) {
            count += freq[j];
            if (count > median_pos) {
                median = j;
                break;
            }
        }
        medians.push_back(median);
    }
    
    for (int median : medians) {
        cout << median << " ";
    }
    cout << endl;
}

int main() {
    int k;
    cin >> k;
    while (k--) {
        solve();
    }
    return 0;
}