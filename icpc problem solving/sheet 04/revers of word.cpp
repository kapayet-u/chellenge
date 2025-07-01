#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    getline(cin, s); 
    stringstream ss(s);
    string word;

    bool first = true; 
    while (ss >> word) 
    {
        reverse(word.begin(), word.end());
        if (!first) 
        {
            cout << " "; 
        }
        cout << word;
        first = false;
    }
    cout << "\n";

    


    


    return 0;
}