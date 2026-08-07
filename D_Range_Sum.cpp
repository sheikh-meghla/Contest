#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;

    while (t--) {
        ll l, r;
        cin >> l >> r;

        if (l > r)
        {
            swap(l, r);
        }

        ll n = r - l + 1;
        ll sum = n * (l + r) / 2;

        cout << sum << "\n";
    }

    return 0;
}