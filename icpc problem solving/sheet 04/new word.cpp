#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for(int i = 0; i < s.size(); i++) 
    {
        if(s[i]=='e'|| s[i]=='E') 
        {
            e++;
        }
        else if(s[i]=='g'|| s[i]=='G') 
        {
            g++;
        }
        else if(s[i]=='y'|| s[i]=='Y') 
        {
            y++;
        }
        else if(s[i]=='p'|| s[i]=='P') 
        {
            p++;
        }
        else if(s[i]=='t'|| s[i]=='T') 
        {
            t++;
        }
    }
    cout << min({e, g, y, p, t}) << "\n";

    return 0;
}