#include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    int ans;
    cin >>t;

    while (t--){
        ans = 1;    
        cin >> n;
        int a[n+5];
        
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            ans=max(ans,min(a[i],n-i));
        }
        cout<<ans<<endl;
    }

    return 0;
}
