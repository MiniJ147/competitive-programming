// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

vector<int> start;
vector<int> stop;

int main() {
	int t; cin>>t;
	for(int i=0; i<t; i++){
		int a, b; cin >> a  >> b;
		start.push_back(a);
		stop.push_back(b);
	}
	sort(start.begin(),start.end());
	sort(stop.begin(),stop.end());

	int ans = 0;
	int l, r, count; l = r = count = 0;
	while(l<t && r<t){
		if(start[l]<stop[r]){
			count+=1;
			l+=1;
		}else{
			count-=1;
			r+=1;
		}
		ans = max(ans,count);
	}
	cout << ans;
}
