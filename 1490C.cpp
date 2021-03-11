#include <bits/stdc++.h>
using namespace std;

bool isSumCube(int N){

    int a = cbrt(N);
    int b = a - 1;

    return ((a*a*a + b*b*b) == N);
}

int main(){

    int t, i;
    cin >> t;

    while(t--){

        cin >> i;

        if (i == 1) cout << "NO";
        
       else if (i > 1){

           if(isSumCube(i))
            cout << "YES\n";

            else cout << "NO\n";
        }
    }
    return 0;
}
