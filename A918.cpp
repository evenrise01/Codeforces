//Codeforces A918

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,m,a,b;
    map<int,bool> fib;
    cin >> n;

    a=1;b=1;
    while(a<=n){
        fib[a] =1;fib[b]=1;

        m=a+b;
        a=b;
        b=m;
    }

    for(int i = 1;i<=n;i++){
        if(fib[i]) cout << "O";

        else cout <<"o";
    }
return 0;
}
