#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    double a , b , c , d , p1 , p2 ;
 cin >> a >> b >> c >> d ;
 p1 = b * log(a);
 p2 = d * log(c);
 if( p1 > p2 )
 {
    cout << "YES";
 }
 else
 {
    cout << "NO";
 }
    return 0;
}
