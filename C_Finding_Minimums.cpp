#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mn = min(mn, x);

        if ((i + 1) % k == 0) {
            cout << mn << " ";
            mn = INT_MAX;
        }
    }

    if (n % k != 0) {
        cout << mn;
    }

    return 0;
}