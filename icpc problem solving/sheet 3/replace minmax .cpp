#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int N;
    cin >> N;

    int A[1000];  

    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; i++) 
    {
        if (A[i] < A[minIndex]) 
        {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) 
        {
            maxIndex = i;
        }
    }

    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    for (int i = 0; i < N; ++i) 
    {
        cout << A[i] << " ";
    }
    cout << '\n';

    return 0;
}