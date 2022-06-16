

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
	int n, s;
	cin >> n >> s;

	vector<int> a(n);
	cin >> a;

	map<int, int> when_first_find;

	int pref = 0;

	when_first_find[pref] = 0;

	for (int i = 0; i < n; i++) {
		pref += a[i];
		if (a[i] == 0)
			continue;

		when_first_find[pref] = i + 1;
	}
	s = pref - s;
	pref = 0;
	int ans = n + 1;
	
	for (int i = n - 1; i >= 0; i--) {
		if (when_first_find.count(s - pref) != 0) {
			rmin(ans, when_first_find[s - pref] + n - 1 - i);
		}

		pref += a[i];
	}

	if (ans == n + 1) {
		cout << -1 << endl;
	}
	else {
		cout << ans << endl;
	}
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
