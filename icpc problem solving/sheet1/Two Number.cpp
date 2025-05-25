#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    double A,B,F,C,R;
    cin >> A >> B;

    F= floor (A / B);
    C= ceil (A / B);
    R= round (A / B);

    cout << "floor " << A << " / " << B << " = " << F << '\n';
    cout << "ceil " << A << " / " << B << " = " << C << '\n';
    cout <<"round " << A << " / " << B << " = " << R << '\n';

    return 0;
}
