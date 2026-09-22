#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;

        for (int i = 1; i < n; i++) {
            if (s[i - 1] == '1' && s[i] == '0') {
                s[i] = '1';
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}