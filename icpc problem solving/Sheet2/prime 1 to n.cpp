#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >> n;

    for (int i = 2; i <=n ; i++)
    {
        int prime = 1; 
        for (int j = 2; j*j <=i ; j++)
        {
            if (i % j == 0) 
            {
        
              prime = 0; 
              break;
            }

        }    
             
        if (prime == 1) 
        cout << i << " ";
    
        
    }
    
      



    return 0;
}