#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool orderByLeft(const pair<int,int> &l, const pair<int,int> &r) {
	return l.first<r.first;
}

int main() {
	int T,a,b;
	cin>>T;
	
	int DP[T];
	
	vector<pair<int,int>> v;
	for(int i=0; i<T; i++) {
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	
	sort(v.begin(), v.end());
	
	int m=-1;
	for(int i=0; i<T; i++) {
        	DP[i]=1;
		for(int j=0; j<i; j++) {
			if(v[i].first>v[j].first&&v[i].second>v[j].second&&DP[i]<DP[j]+1) {
				DP[i]=DP[j]+1;
			}
		}

		m=max(m, DP[i]);
	}
	
	cout<<T-m;
	
	return 0;
}

/*
boj.kr/2565

INPUT:
8
1 8
3 9
2 2
4 1
6 4
10 10
9 7
7 6

OUTPUT:
3
*/
