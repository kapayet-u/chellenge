#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool is_odd(int n) 
{
    
    if(n % 2 != 0) 
   {
    return true;
    }
   else 
   {
    return false;
   }
}
void is_binary_pelindrome(int n, bool flag) 

{
    if(flag)
    {
       
    string binary = "";
    
    while(n > 0) 
    {
        int bit = n % 2;
        binary.push_back('0' + bit);
        n = n/2;
    }
    string reversed_binary = binary;
    reverse(reversed_binary.begin(), reversed_binary.end());
    
    if( binary == reversed_binary)
    {
        cout << "YES\n";
    }
    else 
    {
        cout << "NO\n";
    }
    
    }
    else 
    {
        cout << "NO\n";
    }
    
    
}

int main() {
    fast;
    int n;
    cin >> n;
    bool flag = is_odd(n);
    is_binary_pelindrome(n, flag);

   
    return 0;
}