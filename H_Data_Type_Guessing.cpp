#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    long long ans = n * k;

    if (ans % a != 0) {
    {
        cout << "double";
    }
    } else {
        long long ans2 = ans / a;

        if (ans2 <= INT_MAX)
        {
            cout << "int";
        }
        else
        {
            cout << "long long";
        }
    }

    return 0;
}