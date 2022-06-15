#include <bits/stdc++.h>
#define cout_map(mp)           for(const auto& ele : mp) cout << ele.first << sp << ele.second << endl;
#define ceil(n, m)             (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fixed(n)               cout << fixed << setprecision(n)
#define pref(v)                partial_sum(all(v) , v.begin())
#define cout(v)                for(auto i : v)cout << i << sp
#define lp(i ,n)               for(int i = 0 ;i < n ; i++)
#define cin(v)                 for(auto &i : v)cin >> i
#define rall(s)                s.rbegin(), s.rend()
#define all(s)                 s.begin(), s.end()
#define OO                     2'000'000'000
#define sz(s)                  (int)(s.size())
#define ll                     long long
#define endl                   "\n"
#define sp                     ' '
using namespace std;

void solve () {

    map <int,bool> used;
    string a;
    cin >> a;
    
    int h = (a[0] - '0') * 10 + a[1] - '0'; // 
    int min = (a[3] - '0') * 10 + a[4] - '0';
    int time = h * 60 + min;

    int x;
    cin >> x;

    int ans = 0;

    while (!used[time]){

        used[time] = 1;
        int h = time/60;
        int new_time = (h % 10) * 10 + h/10;
        int min = time % 60;

        if(new_time == min){
            ans++;
        }

        time += x;
        time %= (24 * 60);
    } 
 
    cout << ans << endl;
}
int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
