#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n, sum=0;
    cin >> n;

    sum= n * ( n + 1 ) / 2;

    cout << sum <<'\n';


    return 0;
}
