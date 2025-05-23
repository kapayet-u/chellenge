#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
       int A,B;
       char S;
       cin>> A >> S >> B;

       if(S=='+')
       {
        cout<< (A+B) <<;
       }
       else if(S=='-')
       {
        cout<< (A-B)<<;
       }
       else if(S=='*')
       {
        cout<< (A*B)<<;
       }
       else if(S=='/')
       {
        cout<< (A/B)<<;
       }

    return 0;
}
