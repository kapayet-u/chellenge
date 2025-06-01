#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
        int N;
        cin >> N;

        string digits;
        cin >> digits;

        int sum = 0;
        for (char c : digits)
        {
            sum += c - '0';
        }

        cout << sum << '\n';
        return 0;
    }



