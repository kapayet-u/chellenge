#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;
        int A[100];  

        for (int i = 0; N > i; i++)
            cin >> A[i];

        int min_val = A[0] - 0;  
        int result = INT_MAX;

        for (int j = 1; N > j; j++) 
        {
            int current = A[j] + j + min_val; 
            if (current < result)
                result = current;

            int new_val = A[j] - j;
            if (new_val < min_val)
                min_val = new_val;
        }

        cout << result << '\n';
    }

    return 0;
}