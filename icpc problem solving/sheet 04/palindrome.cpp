#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s,r;
    cin >> s;
    r=s;
    reverse(r.begin(), r.end());
    if (s == r) 
    {
        cout << "YES\n";
    }
    else 
    {
        cout << "NO\n";
    }
    

    return 0;
}