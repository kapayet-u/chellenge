#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    sort(arr, arr + 3);
    for (int i = 0; i < 3; i++) 
    {
        cout << arr[i] << '\n';
    }

    cout << '\n';


    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';

    return 0;
}




    
