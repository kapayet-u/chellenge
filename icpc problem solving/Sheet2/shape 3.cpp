#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() 
{
    fast;
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) 
    {
        int spaces = N - i;
        int stars = 2 * i - 1;
        for (int j = 0; j < spaces; j++)
            cout << ' ';
        for (int j = 0; j < stars; j++)
            cout << '*';

        cout << '\n';
    }
    for (int i = N; i >= 1; i--) 
    {
        int spaces = N - i;
        int stars = 2 * i - 1;
        for (int j = 0; j < spaces; j++)
            cout << ' ';

        for (int j = 0; j < stars; j++)
            cout << '*';

        cout << '\n';
    }

    return 0;
}
