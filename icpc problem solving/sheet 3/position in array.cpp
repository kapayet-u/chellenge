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

    for (int i = 0; i < N; ++i) {
        if (A[i] <= 10) {
            cout << "A[" << i << "] = " << A[i] << '\n';
        }
    }

    return 0;
}

    