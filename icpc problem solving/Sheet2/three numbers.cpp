#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int K, S;
    cin >> K >> S;

    int count = 0;

    for (int X = 0; X <= K; X++) 
    {
        for (int Y = 0; Y <= K; Y++) 
        {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K) 
            {
                count++;
            }
        }
    }

    cout << count << '\n';
    return 0;
}
 