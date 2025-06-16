#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int A, B;
    char S;
    cin >> A >> S >> B;

    if (S == '<') 
    {
        if (A < B)
            cout << "Right" << '\n';
        else
            cout << "Wrong" << '\n';
    } else if (S == '>') 
    {
        if (A > B)
            cout << "Right" << '\n';
        else
            cout << "Wrong" << '\n';
    } else if (S == '=') 
    {
        if (A == B)
            cout << "Right" << '\n';
        else
            cout << "Wrong" << '\n';
    }

    return 0;
}

    

