#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n, x, y;
    cin >> n >> x >> y;

    string number;
    cin >> number;

    
    int digit1 = number[x - 1] - '0';
    int digit2 = number[y - 1] - '0';

    
    if ((digit1 != 0 && digit2 % digit1 == 0) || (digit2 != 0 && digit1 % digit2 == 0)) 
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
    return 0;
}
