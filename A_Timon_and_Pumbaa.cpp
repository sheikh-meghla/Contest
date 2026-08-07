#include<bits/stdc++.h>

using namespace std;

int main() {

    long long a,b;
    cin >> a >> b;
    long long sub = a - b;

    if (sub <= 0)
    {
        cout << 0 <<endl;
    }
    else{
        cout << sub <<endl;
    }
    
    return 0;
}