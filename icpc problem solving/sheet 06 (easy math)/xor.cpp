#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long a,b,Q;
    cin >> a >> b >> Q;

    long long ans;
    if(Q%3==1)
    {
        ans = a;
    }
    else if(Q%3==2)
    {
       ans = b;
    }
    else
    {
        ans = a ^ b;
    }
    cout << ans << '\n';
    

    return 0;
}