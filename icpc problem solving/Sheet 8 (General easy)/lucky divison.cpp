#include <bits/stdc++.h>
using namespace std;
#define endll '\n'

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool found = false;
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endll;
    return 0;
}