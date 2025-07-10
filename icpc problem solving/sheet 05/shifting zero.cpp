#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void shift_zero()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != 0)
        {
            ans.push_back(arr[i]);
        }
        else
        {
            count++;
        }
    }
    while (count--) 
    {
        ans.push_back(0);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if(i < ans.size() - 1)
        {
            cout << " ";
        }
    }
    cout << "\n";
}
    
    
int main() {
    fast;
    shift_zero();
 
    
    return 0;
}