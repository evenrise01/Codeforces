#include<bits/stdc++.h>
using namespace std;
int a[1000000+5];

int main(){

    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;

        cout << (abs(a-b) + 9)/10 << endl;
    }

    return 0;
}
