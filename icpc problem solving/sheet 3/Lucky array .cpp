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
    int min_element = A[0];
    for (int i = 1; i < N; i++) 
    {
        if (A[i] < min_element) 
        {
            min_element = A[i];
        }
    }
    int count = 0;
    for (int i = 0; i < N; i++) 
    {
        if (A[i] == min_element) 
        {
            count++;
        }
    }

    if (count % 2 == 1) 
    {
        cout << "Lucky" << '\n';
    }
     else 
    {
        cout << "Unlucky" << '\n';
    }

    return 0;
}