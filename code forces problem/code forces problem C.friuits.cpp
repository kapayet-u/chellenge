#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    unordered_map<string, int> fruit_count;

    for (int i = 0; i < m; i++) {
        string fruit;
        cin >> fruit;
        fruit_count[fruit]++;
    }

    vector<int> counts;
    for (auto &entry : fruit_count) {
        counts.push_back(entry.second);
    }

    sort(prices.begin(), prices.end());       // ascending
    sort(counts.begin(), counts.end(), greater<int>()); // descending

    int min_cost = 0, max_cost = 0;

    for (int i = 0; i < counts.size(); i++) {
        min_cost += prices[i] * counts[i];                     // cheapest prices first
        max_cost += prices[n - 1 - i] * counts[i];             // most expensive prices first
    }

    cout << min_cost << " " << max_cost << endl;

    return 0;
}
