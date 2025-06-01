#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() 
{
    fast;
    int N;
    cin >> N;

    long long fib[51]; 

    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i <= N; ++i) 
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[N] << '\n';

    return 0;
}

    
    
