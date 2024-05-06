// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

vector<int> towers;

int main() {
	int n; cin >> n;
	for(int i=0; i<n; i++){
		int c; cin >> c;
		auto low = lower_bound(towers.begin(),towers.end(),c);
		auto up = upper_bound(towers.begin(), towers.end(), c);
		if(low==towers.end() || (*low == c && up==towers.end())) {
			towers.push_back(c);
			continue;
		}
		int idx = (*low == c) ? up-towers.begin() : low-towers.begin();
		towers[idx] = c;
	}
	cout << towers.size();
}
