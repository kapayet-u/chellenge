#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() 
{
    fast;
    int T;
    cin >> T; 

    while (T--) 
    {
        int N;
        cin >> N;

        if (N == 0) 
        {
            cout << "0\n";
            continue;
        }

        while (N > 0) 
        {
            cout << N % 10;
            N /= 10;
            if (N > 0) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
    
