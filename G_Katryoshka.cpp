#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll x = min({n, m, k});

    n = n - x;
    k = k - x;

    ll y = min(n / 2, k);

    cout << x + y << endl;

    return 0;
}