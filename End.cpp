#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll n;
    cin >> n;

    ll arr[n];

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll l = 0;
    ll r = n - 1;

    while (l <= r) {
        cout << arr[l] << " ";
        l++;
        if (l <= r) {
            cout << arr[r] << " ";
            r--;
        }
    }

    cout << endl;

    return 0;
}