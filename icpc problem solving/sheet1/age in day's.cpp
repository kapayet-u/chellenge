#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n, y, m, d;
    cin >> n;
    y = n / 365; 
    m = (n % 365) / 30;
    d = (n % 365) % 30;
    cout << y << " years\n" << m << " months\n" << d << " days\n" << '\n';
    


    return 0;
}