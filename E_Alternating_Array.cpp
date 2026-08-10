#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll count_m = 0;
    ll count_p = 0;
    ll m = 0;
    ll p = 0;

    for(ll i = 0; i < n; i++) {
        if ( arr[i]%2 == 0)
        {
            if (arr[i] < 0)
            {
                count_m++;
            }
            else{
                count_p++;
            }
            
        }
        
        else if (arr[i]%2 > 0)
        {
            count_p++;
        }
        else
        {
            count_m++;
        }  
        
    }

    ll ans;
    if (count_m == n || count_p == n)
    {
        ans = n /2;
    }
    else if (count_p < count_m)
    {
        ans = min(count_m,count_p);
    }
    else if (count_p == n/2 || count_m == n/2)
    {
        ans = 0;
    }
    else 4
    {
        ans = min(count_p,count_m);
    } 
    
    cout  << ans <<endl;
    return 0;
}