#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    getline(cin, s); 
    
    int count = 0;

    bool Word = false;
    for (int i = 0; i < s.size(); i++) 
    {
        if(isalpha(s[i])) 
        
        {
            if (!Word) 
            {
                count++;
                Word = true; 
            }

        }
        else 
        {
            Word = false; 
        }

    }
    cout << count << "\n";



    

    return 0;
}