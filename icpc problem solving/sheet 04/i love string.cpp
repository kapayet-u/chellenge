#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >> n;
    while (n--) 
    {
        string s,t;
        cin >> s >> t;

        string ans = "";
        int m = max(s.size(), t.size());
        for ( int i = 0; i < m; i++) 
        {
            if(i<s.size())
            {
                ans += s[i];
            }
            if(i<t.size())
            {
                ans += t[i];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}