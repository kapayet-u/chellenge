#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool canRearrange(vector<int>& stones, int n) {
    int even_pos = (n + 1) / 2;  // positions 1, 3, 5,... (odd indices = even_pos count)
    int odd_pos = n / 2;         // positions 2, 4, 6,... (even indices = odd_pos count)

    int even_num = 0, odd_num = 0;
    for (int x : stones) {
        if (x % 2 == 0) even_num++;
        else odd_num++;
    }

    // Two possible strategies:
    // 1. Put all even numbers in odd positions and all odd numbers in even positions
    // 2. Put all even numbers in even positions and all odd numbers in odd positions

    // Check if either is possible
    if ((even_num >= even_pos && odd_num >= odd_pos) ||
        (even_num >= odd_pos && odd_num >= even_pos)) 
        {
        return true;
    }
    return false;
}

int main() {
    fast;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> stones(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> stones[i];
        }

        if (canRearrange(stones, n)) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }

    return 0;
}
