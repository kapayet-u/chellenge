#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int q;
    string s;
    cin >> q >> s;
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    
    if(q == 1) 
    {
        for(int i =0 ; i < s.length(); i++) 
        {
            size_t pos = 0;
            pos = original.find(s[i], pos);

            cout << key[pos];
        }
    }
 
    else
    {
     
        for(int i = 0; i < s.length(); i++) 
        {
            size_t pos = 0;
            pos = key.find(s[i], pos);

            cout << original[pos];
        }

        cout << "\n";
        

    }
    

    return 0;
}