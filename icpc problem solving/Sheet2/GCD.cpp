#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n1,n2,rem,gcd;
    cin >> n1 >> n2;

    while (n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    cout << gcd <<'\n';
    
    


    return 0;
}