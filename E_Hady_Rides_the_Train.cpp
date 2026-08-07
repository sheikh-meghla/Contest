#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll id;
    cin >> id;

    ll row = id / 4;
    ll col;

    if (row % 2 == 0)
    {
        col = id % 4;
    }
    else
    {
        col = 3 - (id % 4);
    }

    cout << row << " " << col << endl;

    return 0;
}