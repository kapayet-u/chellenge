#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int X;
    cin >> X;
    int flag = 1; 
    if (X < 2) 
    {
        flag = 0;
    } 
    else 
    {
        for (int i = 2; i * i <= X; ++i) 
        {
            if (X % i == 0) 
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        cout << "YES" <<'\n';
    else
        cout << "NO" << '\n';

    return 0;
}
