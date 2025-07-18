#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long n , i;
    long long sum =0;
    cin >> n;
    for( i = 0; i <= n ;i++)
    {
        sum+= i;
        if(sum>n)
        {
            break;
        }
       
    }
    i--;
    cout << i <<'\n';

    
    return 0;
}