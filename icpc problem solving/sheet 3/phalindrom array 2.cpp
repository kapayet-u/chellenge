#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int N;
    cin >> N;  

    int A[100000];  

    for (int i = 0; i < N; ++i) 
    {
        cin >> A[i];
    }

    int isPalindrome = 1;  

    for (int i = 0; i < N / 2; ++i)
    {
        if (A[i] != A[N - 1 - i]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1) 
    {
        cout << "YES" << '\n';
    } else 
    {
        cout << "NO" << '\n';
    }

    return 0;
}