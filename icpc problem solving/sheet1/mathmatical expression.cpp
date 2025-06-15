#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() 
{
    fast;
    int a, b, c;
    char s , q;
    cin >> a >> s >> b >> q >> c;

    int result;
    if (s == '+') 
    {
        result = a + b;
    } else if (s == '-') 
    {
        result = a - b;
    } else if (s == '*') 
    {
        result = a * b;
    }

    if (result == c) 
    {
        cout << "Yes" << '\n';
    } else 
    {
        cout << result << '\n';
    }

    return 0;
}
