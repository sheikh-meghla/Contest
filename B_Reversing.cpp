#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {

        if (arr[i]==0)
        {
            int l = 0;
            int r = i - 1;
            while (l<r)
            {
                int temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;

                l++;
                r--;
            }
            
            
        }
        
    }


    for(int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}