#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void swap(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    cout  << a << " " << b << "\n";
}
int main() {
    fast;
    int a, b;
    cin >> a >> b;
    swap(a, b);
    return 0;
}