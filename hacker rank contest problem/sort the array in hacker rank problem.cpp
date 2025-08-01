#include <iostream>
#include <vector>
using namespace std;

int minOperationsToSort(const vector<int>& arr) {
    int n = arr.size();
    vector<int> blocks;

    // Group identical elements into blocks
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && arr[j] == arr[i]) j++;
        blocks.push_back(arr[i]);
        i = j;
    }

    // Count transitions where the next block is smaller than the previous
    int ops = 0;
    for (int i = 1; i < blocks.size(); ++i) {
        if (blocks[i] < blocks[i - 1]) ops++;
    }

    return ops;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int& x : arr) cin >> x;
        cout << minOperationsToSort(arr) << '\n';
    }
    return 0;
}
