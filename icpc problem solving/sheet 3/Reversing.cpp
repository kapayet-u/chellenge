#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int N;
    cin >> N;  

    int A[1000];  

    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    
    for (int i = N - 1; i >= 0; --i) {
        cout << A[i];
        if (i > 0) cout << " ";
    }
    cout << '\n';

    return 0;
}