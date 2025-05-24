#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long int N,M,X,Y,sum;
    cin >> N >> M;

    X=(N % 10);
    Y=(M % 10);

    sum = X + Y;

    cout << sum <<'\n';
    
    return 0;
}