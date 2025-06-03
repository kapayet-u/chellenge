#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int N;
    cin >> N;
    int A[1000];
    for (int i = 0; i < N; ++i) 
    {
        cin >> A[i];
    }

    int minValue = A[0];
    int minIndex = 0;

    for (int i = 1; i < N; ++i) 
    {
        if (A[i] < minValue) 
        {
            minValue = A[i];
            minIndex = i;
        }
    }

    cout << minValue << " " << (minIndex + 1) << endl;

    return 0;
}


    