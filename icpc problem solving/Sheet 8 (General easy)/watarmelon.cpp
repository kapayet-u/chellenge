#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >> n;
    if(n%2==1)
    {
        cout << "NO" << '\n';
    }
    else if(n==2)
    {
       cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
    }
    

    return 0;
}