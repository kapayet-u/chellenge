#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int A,B;
    cin>> A >> B;
    if ((A % B)==0)
    {
        cout << "Multiples" <<'\n';
    } 
    else if((B % A)==0)
    {
         cout << "Multiples" <<'\n';
    } 
    else
    {
         cout << "No Multiples" <<'\n';
    }



    return 0;
}