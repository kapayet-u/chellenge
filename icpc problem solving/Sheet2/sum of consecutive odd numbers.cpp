#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int X, Y;
        cin >> X >> Y;

    
        if (X > Y) 
        {
            swap(X, Y);
        }

        int sum = 0;

        for (int i = X + 1; i < Y; ++i) 
        {
            if (i % 2 != 0) 
            {
                sum += i;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}

    

