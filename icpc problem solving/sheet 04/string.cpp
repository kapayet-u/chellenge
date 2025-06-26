#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string a ,b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << '\n';
    cout << a + b << '\n';

    swap(a[0], b[0]);

    cout << a << " " << b << '\n';

    return 0;
}