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
        for (int i = 0; N > i; i++) 
        {
            int current_max = A[i];
            for (int j = i; N > j; j++) 
            {
                if (A[j] > current_max)
                    current_max = A[j];
                cout << current_max << " ";
            }
        }
        cout << '\n';
        
    }

    return 0;
}