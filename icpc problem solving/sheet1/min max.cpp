#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long int A,B,C,min,max;
    cin>> A >> B >> C;
    min = A;
    max = A;

    if(B>max)
    {
      max=B;
    }
    if(C>max)
    {
        max=C;
    }
    if(B<min)
    {
        min=B;
    }
    if(C<min)
    {
        min=C;
    }
    
  cout << min << " " << max <<'\n';
    





    return 0;
}