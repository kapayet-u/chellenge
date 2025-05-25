#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
     string F1,S1;
     string F2, S2;

     cin >> F1 >> S1;
     cin >> F2 >> S2;

     if(S1==S2)
     {
        cout << "ARE Brothers" << '\n';
     }
     else
     {
        cout << "NOT" << '\n';
     }


    return 0;
}