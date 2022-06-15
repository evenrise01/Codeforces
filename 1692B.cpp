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

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    cin(v);
    set<int>s;

    for(int i = 0; i<n;i++){
        s.insert(v[i]);
    } 
    int rem = n - sz(s);
    cout << (rem & 1 ? s.size() - 1 : s.size()) << endl;

}

int main(){

    int t;
    cin >> t;

    while(t--){
        Solve();
    }
    return 0;
}
