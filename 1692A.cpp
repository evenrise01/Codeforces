#include <iostream>
using namespace std;

int main(){

    int t;
    int arr[4];

    cin >> t;

    while(t--){
        int ans = 0;
        for (int i = 0; i < 4; i++){
            cin >> arr[i];
        }
        if (arr[1] > arr[0]) ans ++;
        if (arr[2] > arr[0]) ans ++;
        if (arr[3] > arr[0]) ans ++;
        cout << ans << endl;
    }

    return 0;
}
