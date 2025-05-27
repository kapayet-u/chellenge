#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
     long long int a,b,c,d,x;
     cin >> a >> b >> c >> d;
     
     x= ((((a%100)*(b % 100)) %100)*(((c % 100)*(d % 100))%100)%100);
     

     cout << setw(2) << setfill ('0')<< x << '\n';



    


    return 0;
}