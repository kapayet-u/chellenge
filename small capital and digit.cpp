

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string X;
    cin >> X;

    if (isdigit(X[0]))
    {
        cout << "IS DIGIT" << '\n';
    }
    else
    {
        cout << "ALPHA" << '\n';

        if (X[0] >= 'a' && X[0] <= 'z')
        {
            cout << "IS SMALL" << '\n';
        }
        else
        {
            cout << "IS CAPITAL" << '\n';
        }
    }

    return 0;
}
