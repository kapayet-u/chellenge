#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    string s1 = "";
    
    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z') 
        {
            s1 += s[i] - 32; 
        }
         else if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            s1 += s[i] + 32; 
        } 
        else if (s[i] == ',')
        {
            s1 += ' ';
        }
        else 
        {
            s1 += s[i]; 
        }
    }
    
    cout << s1 << "\n";

    return 0;
}