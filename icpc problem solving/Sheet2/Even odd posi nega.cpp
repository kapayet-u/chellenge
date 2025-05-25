#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >>n;
    long long int even = 0, odd = 0, positive = 0, nagetive = 0;

    for (int i = 0; n > i; i++)
    {
        int x;

        cin >> x;
        if(x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(x > 0)
        {
           positive++;
        }
        else if(x < 0)
        {
           nagetive++;
        }
    }
     cout << "Even:" << " " << even << '\n';
     cout << "Odd:" << " " << odd << '\n';
     cout << "Positive:"<< " " << positive << '\n';
     cout << "Negative:" << " " << nagetive << '\n';
    
    
    return 0;
}