#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    ll t;
    cin >> t;

    while (t--) {

        ll n;
        cin >> n;

        ll arr[n];
        ll even = 0;
        ll odd = 0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }

        if (n % 2 != 0) {
            cout << -1 << endl;
        }
        else {
            cout << abs(odd - even) / 2 << endl;
        }
    }

    return 0;
}