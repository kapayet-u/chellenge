#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    double a,b;
    cin >> a >> b;
    //Q1
    if(a > 0 && b > 0) 
    {
        cout << "Q1\n";
    }
    //Q2
    else if(a < 0 && b > 0) 
    {
        cout << "Q2\n";
    }
    //Q3
    else if(a < 0 && b < 0) 
    {
        cout << "Q3\n";
    }
    //Q4
    else if(a > 0 && b < 0) 
    {
        cout << "Q4\n";
    }
    else if(a == 0 && b == 0) 
    {
        cout << "Origem\n";
    }
    else if(a == 0) 
    {
        cout << "Eixo Y\n";
    }
    else if(b == 0) 
    {
        cout << "Eixo X\n";
    }

    return 0;
}