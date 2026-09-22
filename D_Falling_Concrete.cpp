#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> v(n);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            v[i] = x - (i + 1);
        }

        sort(v.begin(), v.end());

        int ans = 1;
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1] + 1) {
                count++;
            }
            else if (v[i] != v[i - 1]) {
                count = 1;
            }

            ans = max(ans, count);
        }

        cout << ans << '\n';
    }

    return 0;
}