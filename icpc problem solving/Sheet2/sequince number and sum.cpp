#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n, m;
    while (cin >> n >> m) 
    {
        if (n <= 0 || m <= 0) 
        {
            break; 
        }

        int start = min(n, m);
        int end = max(n, m);
        int sum = 0;

        for (int i = start; i <= end; ++i) 
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << '\n';
    }
    return 0;
}