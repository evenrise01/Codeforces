

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

    int p = 1;
    while (p * 2 < n){
        p <<= 1;
    }

    for(int i = p-1; i >= 0; i--){
        cout << i << " ";
    }

    cout << p;

    for (int i = p+1; i<n; i++){
        cout << " " << i;
    }

    cout << endl;
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
