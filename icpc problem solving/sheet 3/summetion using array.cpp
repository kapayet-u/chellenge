#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    int n;
    cin >> n;

    long long x, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << '\n';
    return 0;
}



