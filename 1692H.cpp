

#if defined(LOCAL) || defined (LOCAL_CLION)
	#define debug(x) std::cerr << #x << ": " << x << std::endl;
	#define _GLIBCXX_DEBUG
#else
	#define debug(x) 238
#endif

#ifdef ONLINE_JUDGE
	#pragma GCC optimize("Ofast", "no-stack-protector", "inline", "unroll-loops")
	#pragma comment(linker,"/STACK:64000000")
#endif

#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define X first
#define Y second
#define pii pair<int, int>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;

template<typename T>
bool rmin (T& a, T b) {
	if (b < a) {
		a = b;
		return 1;
	}
	return 0;
}

template<typename T>
bool rmax (T& a, T b) {
	if (a < b) {		
		a = b;
		return 1;
	}
	return 0;
}

template<typename T>
istream& operator >> (istream& in, vector<T>& a) {
	for (auto &it : a)
		in >> it;
	return in;
}

template<typename T>
ostream& operator << (ostream& out, vector<T>& a) {
	for (auto &it : a) {
		out << it << ' ';
	}
	return out;
}

void solve () {
	
	int n;
	cin >> n;
 
	vector<int> a(n);
	cin >> a;
 
	map<int, int> cnt;
	map<int, pii> best_ans; // best val
	
	int ans = -1;
	pii lr = {0, 0};
	int num = 0;
 
	for (int i = 0; i < n; i++) {
		rmin(best_ans[a[i]], {2 * cnt[a[i]] - i, i});
		cnt[a[i]]++;	
		
		int val_i = 2 * cnt[a[i]] - i;
 
		if (rmax(ans, val_i - best_ans[a[i]].X)) {
			num = a[i];
			lr = {best_ans[a[i]].Y + 1, i + 1};
		}
	}
 
	cout << num << ' ' << lr.X << ' ' << lr.Y << endl;
}

signed main () {
	fast;
	
#if defined (LOCAL_CLION)
	freopen("../input.txt", "r", stdin);
#elif defined (LOCAL)
	freopen("./input.txt", "r", stdin);
	freopen("./output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;

	while (t--)
		solve();
}
