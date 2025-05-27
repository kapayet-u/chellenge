#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
         
    int n,max;
    cin >> n;
     
    max=0;
    

    for (int i = 0; n>i ; i++)
    {
        int x;
        cin >> x;
        if(x>max)
        {
            max = x;
        }
        
    }
    cout << max <<'\n';


    return 0;
}