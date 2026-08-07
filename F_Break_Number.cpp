#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    int ans = 0;

    while (n--) {
        cin >> x;

        int cnt = 0;
        while (x % 2 == 0) {
            cnt++;
            x /= 2;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}