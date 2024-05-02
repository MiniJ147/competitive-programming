// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int ans = 0;
	int n, m, k; cin >> n >> m >> k;
	
	vector<int> a(n);
	for(int i=0; i<n;i++) cin >> a[i];
 
	vector<int> b(m);
	for(int i=0; i<m; i++) cin >> b[i];
 
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
 
	int i, j; i = j = 0;
	while(i<n && j<m){
		int lower = a[i]-k;
		int upper = a[i]+k;
		if(lower<=b[j] && b[j]<=upper){
			ans+=1;
			i++;
			j++;
		}else if(b[j]<lower) j++;
		else if(b[j]>upper) i++;
	}
	cout << ans;
	return 0;
}
