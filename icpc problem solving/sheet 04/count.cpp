#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    int sum = 0;
    for (int i=0;i<s.size();i++)
    {
        sum += s[i] - '0'; 
    }
    
     cout<< sum << '\n';
    
    
    


    return 0;
}