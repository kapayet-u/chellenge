#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long n;
    cin >> n;
    long long sum=0;
    for(long long i=1; i*i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(i!=n/i) sum+=n/i;
           
        }
    }
    cout << sum <<'\n';
    


    return 0;
}