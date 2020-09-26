//Codeforces B1325

#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a;

        set<int>s;
        while(a--){
            int b;
            cin >> b;
            s.insert(b);
        }
        cout << s.size()<<endl;
       
    }

    return 0;
}
