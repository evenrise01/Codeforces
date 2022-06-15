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
	int N = 10;
 
	vector<vector<char>> a(N, vector<char> ('*', N));
 
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			cin >> a[i][j];
			if (a[i][j] == '#')
				a[i][j] = '*';
		}
	}
 
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			if (a[i - 1][j - 1] == '*' && a[i][j] == '*' && a[i - 1][j + 1] == '*' && a[i + 1][j - 1] == '*' && a[i + 1][j + 1] == '*') {
				cout << i << ' ' << j << endl;
				return;
			}
		}
	}
 
}
int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
