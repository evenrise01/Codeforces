#include<bits/stdc++.h>
using namespace std;
int a[1000000+5];

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        for(int i = 0; i<n;i++){
            cin >> a[i];
        }
       
       int64_t ans = 0;
       for(int j =29; j>=0;j--)
       {
           int64_t cnt =0;
           for (int i =0; i< n; i++){
               if(a[i] >= (i<<j)&& a[i] < (1<<(j+1))){
                   cnt++;
               }
           }
           ans+=cnt*(cnt-1)/2;
       }
    cout << ans << "\n";
    }

    return 0;
}
