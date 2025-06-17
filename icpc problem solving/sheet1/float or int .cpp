#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    float n;
    cin >> n;

    int intPart = (int)n;

    if (n == intPart) 
    {
        cout << "int " << intPart << '\n';
    } else 
    {
        cout << "float " << intPart << " " << n - intPart << '\n';
    }

    return 0;
}
