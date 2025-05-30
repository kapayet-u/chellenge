#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return 0; 
        n /= 10;
    }
    return 1;
}

int main() {
    fast;
    int A, B;
    cin >> A >> B;
    int found = 0;

    for (int i = A; i <= B; i++)
     {
        if (isLucky(i)) 
        {
            cout << i << ' ';
            found = 1;
        }
    }

    if (!found)
    {
        cout << -1;
    }

    cout << '\n';
    return 0;
}
