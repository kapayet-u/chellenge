#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int A, B;
    cin >> A >> B;

    string S;
    cin >> S;

    
    if (S.length() != A + B + 1) 
    {
        cout << "No" << '\n';
        return 0;
    }

    
    if (S[A] != '-') 
    {
        cout << "No" << '\n';
        return 0;
    }

    for (int i = 0; i < S.length(); ++i) 
    {
        if (i == A) continue; 
        if (!isdigit(S[i])) 
        {
            cout << "No" << '\n';
            return 0;
        }
    }

    cout << "Yes" << '\n';
    return 0;
}