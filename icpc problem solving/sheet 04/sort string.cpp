#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >> n;
    int count[26] = {0};
    char c;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        count[c - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        while(count[i] > 0)
        {
            cout << (char)(i + 'a');
            count[i]--;
        }
    }
    cout << "\n";

    

    return 0;
}