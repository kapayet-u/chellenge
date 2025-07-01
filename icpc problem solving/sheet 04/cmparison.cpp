#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    
    if(s.size()== 1)
    {
        cout << s << "\n";
        return 0;
    }

    string smallest = s;
    for(int i = 1; i < s.size(); i++) 
    {
        string x = s.substr(0,i);
        string y = s.substr(i);
        
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        string combined = x + y;

        if(combined < smallest) 
        {
            smallest = combined;
        }

    }
    cout << smallest << "\n";




    

    return 0;
}