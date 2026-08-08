#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    int a[1000];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = a[left] + a[right];

        if (sum == target) {
            cout << "YES";
            return 0;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << "NO";

    return 0;
}