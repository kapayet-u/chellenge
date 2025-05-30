#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long factorial = 1;
        for (long long i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << factorial << "\n";
    }


    return 0;
}
