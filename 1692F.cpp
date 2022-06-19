

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
	
	int cnt[10];
	fill(cnt,cnt+10,0);

	int n;
	cin >> n;

	vector<int> a(n);
	cin >> a;

	for(auto &it : a){
		cnt[it%10]++;
	}

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			for(int k = 0; k < 10; k++){
				if ((i+j+k) % 10 != 3)
					continue;

				if(cnt[i] == 0)
					continue;
				cnt[i]--;

				if(cnt[j] == 0){
					cnt[i]++;
					continue;
				}
				cnt[j]--;

				if(cnt[k] == 0){
					cnt[i]++;
					cnt[j]++;
					continue;
				}

				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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
