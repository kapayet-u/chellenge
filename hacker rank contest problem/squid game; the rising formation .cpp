#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef long long ll;

class BIT {
    vector<int> bit;
    int n;
public:
    BIT(int size) {
        n = size + 2;
        bit.assign(n, 0);
    }

    void update(int index, int val) {
        for (; index < n; index += index & -index)
            bit[index] += val;
    }

    int query(int index) {
        int sum = 0;
        for (; index > 0; index -= index & -index)
            sum += bit[index];
        return sum;
    }

    void reset() {
        fill(bit.begin(), bit.end(), 0);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> sorted_a;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sorted_a.push_back(a[i]);
        }

        // Coordinate compression
        sort(sorted_a.begin(), sorted_a.end());
        map<ll, int> compress;
        int id = 1;
        for (ll val : sorted_a) {
            if (compress.find(val) == compress.end())
                compress[val] = id++;
        }

        vector<int> comp_a(n);
        for (int i = 0; i < n; ++i)
            comp_a[i] = compress[a[i]];

        vector<int> left_smaller(n), right_greater(n);

        BIT bit(id + 2);

        // Left to right: count elements < a[j] before j
        for (int i = 0; i < n; ++i) {
            left_smaller[i] = bit.query(comp_a[i] - 1);
            bit.update(comp_a[i], 1);
        }

        bit.reset();

        // Right to left: count elements > a[j] after j
        for (int i = n - 1; i >= 0; --i) {
            right_greater[i] = bit.query(id) - bit.query(comp_a[i]);
            bit.update(comp_a[i], 1);
        }

        ll total = 0;
        for (int i = 0; i < n; ++i)
            total += 1LL * left_smaller[i] * right_greater[i];

        cout << total << "\n";
    }

    return 0;
}
