#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    
    int arr[26] = {0}; 

    for (int i = 0; i<s.size(); i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            cout << char(i + 'a') << " : " << arr[i] << "\n";
        }
    }
    

    
    return 0;
}