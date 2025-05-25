#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int X, i=0;
    cin >> X;
    
    while (X >= 10)
    {
        X=X/10;
        i++;
    }
    
    X= X % 2;

    if(X==0)
    {
        cout << "EVEN" <<'\n';
    }
    else
    {
        cout << "ODD" <<'\n';
    }

    
    return 0;
}