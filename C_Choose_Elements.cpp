#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll sum = 0;

    ll n,k;
    cin >> n>> k;
    ll arr[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }


    sort(arr, arr + n, greater<ll>());

    for(int i = 0; i < k; i++) {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        
    }
    cout << sum<<"\n";

    return 0;
}