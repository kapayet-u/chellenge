#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;

    int N, X;
    cin >> N;

    int A[100000];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> X;

    int position = -1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            position = i;
            break;
        }
    }

    cout << position << '\n';

    return 0;
}

