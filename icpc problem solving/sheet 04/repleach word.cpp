#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    
    string W = "EGYPT";
    size_t pos;
    while ((pos = s.find(W)) != string::npos) 
    {
        s.replace(pos, W.length(), " ");
    }
   cout << s << "\n";

    return 0;
}