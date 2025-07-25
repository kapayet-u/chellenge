#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int a, b, c; cin >> a >> b >> c;

    if((a+b) > c && (b+c) > a && (c+a) > b)
    {
        cout << "Valid" << '\n';

        double s = (a + b + c) / 2;

        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << fixed << setprecision(6) << area << '\n';
    }
    else
    {
        cout << "Invalid" << '\n';
    }
    
    return 0;
}