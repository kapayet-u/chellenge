#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long n1, n2;
    cin >> n1 >> n2;
    long long sum = 0;
    long long Even_Sum = 0;
    long long Odd_Sum = 0;
    for(long long i = min(n1, n2); i <= max(n1, n2); i++)
    {
        sum += i;
        if(i & 1) 
        {
            Odd_Sum += i;
        }
        else
        {
            Even_Sum += i;
        }
    }
    cout << sum << '\n' << Even_Sum << '\n' << Odd_Sum << '\n';
    

    return 0;
}