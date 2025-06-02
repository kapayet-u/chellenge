#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    int N;
    cin >> N;

    int A[1000];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {

                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    cout << '\n';
    return 0;
}




