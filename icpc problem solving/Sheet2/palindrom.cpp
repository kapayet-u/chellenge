#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n,reversed=0,rem,temp;
    cin>> n;
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        reversed = reversed*10+rem;
        temp=temp/10;
    }
    cout << reversed << '\n';
    if(reversed==n)
    {
        cout << "YES" <<'\n';
    }
    else
    {
        cout  << "NO" << '\n';
    }
    
    






    return 0;
}