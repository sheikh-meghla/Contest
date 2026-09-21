#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a,b,c;
        cin >> a >> b >> c;

        int mn = min({a,b,c});
        int ans = n - mn;
        cout << ans << endl;
    }
    
    return 0;
}