#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
     string X;
     cin>> X;

     if(X[0] >= 'a' && X[0] <= 'z')
     {
        cout<<(char )(X[0] - 32) << '\n';
     }
     else if(X[0] >= 'A' && X[0] <= 'Z')
     {
        cout<<(char )(X[0] + 32) << '\n';
     }
     else
     {
        cout<< "Not a charecter" << '\n';
     }


    return 0;
}
