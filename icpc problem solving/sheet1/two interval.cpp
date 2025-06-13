#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
 
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int start = max(l1, l2);
    int end = min(r1, r2);

    if (start <= end) {
        cout << start << " " << end << '\n';
    } else {
        cout << -1 <<'\n';
    }

    return 0;
}

    