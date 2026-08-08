#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    int ans = 0;

    while (n--) {
        cin >> x;

        int counted_iterator = 0;
        while (x % 2 == 0) {
            counted_iterator++;
            x /= 2;
        }

        ans = max(ans, counted_iterator);
    }

    cout << ans << endl;

    return 0;
}