#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        long long x = abs(a-b);
        long long y = abs(a+c-b);
        long long ans = max(x,y);
        cout << ans << endl;
  
    }
    

    return 0;
}