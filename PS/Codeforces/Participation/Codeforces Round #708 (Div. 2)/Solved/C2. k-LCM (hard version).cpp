#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <cstring>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)(x.size())
#define fi first
#define sc second

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

void solve() {
	int N, K; cin >> N >> K;

	int one = (K - 3);
	N -= one;
	for(int i = 1; i <= one; i++) cout << 1 << ' ';

	if(N & 1) cout << 1 << ' ' << (N - 1) / 2 << ' ' << (N - 1) / 2 << '\n';
	else if(N % 4 == 0) cout << N / 4 << ' ' << N / 4 << ' ' << N / 2 << '\n';
	else if(N % 2 == 0) cout << 2 << ' ' << (N - 2) / 2 << ' ' << (N - 2) / 2 << '\n';
	
}

int main() {
	fastio
	
	int T; cin >> T;
	while(T--) solve();

	return 0;
}
