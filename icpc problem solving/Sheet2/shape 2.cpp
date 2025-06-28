#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >> n;
    for (int i= 0;i < n; i++)
    {
        for (int j = 0;j< n-i-1;j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
        
    }
   
    
    

    return 0;
}