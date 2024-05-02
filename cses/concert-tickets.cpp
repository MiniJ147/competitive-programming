 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, m; cin >> n >> m;
	multiset<int> h;
 
	for(int i=0; i<n; i++){
		int c; cin >> c;
		h.insert(c);
	}
	for(int i=0; i<m; i++){
		int mxc; cin>>mxc;
		auto it = h.lower_bound(mxc);
		if(it != h.end() && *it <= mxc){
			cout << *it << endl;
			h.erase(it);
		}else if(std::distance(h.begin(), it)){
			cout << *--it << endl;
			h.erase(it);
		}else cout << "-1\n";
	}
	return 0;
}