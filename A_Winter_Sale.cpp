#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, p;
    cin >> x >> p;

    double original = (p * 100.0) / (100.0 - x);

    cout << fixed << setprecision(2) << original << endl;

    return 0;
}