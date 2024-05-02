// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
using namespace std;
 
vector<vector<bool>> grid;
int n, m;
 
void dfs(int x, int y){
	if(!grid[y][x]) return;
	stack<pair<int,int>> s;
	s.push(pair<int,int>(x,y));
	while(!s.empty()){
		auto cord = s.top();
		int x = cord.first;
		int y = cord.second;
		
		s.pop();
 
		if(x<0 || x>=m) continue;
		if(y<0 || y>=n) continue;
		if(!grid[y][x]) continue;
		grid[y][x] = 0;
 
		s.push(pair<int,int>(x-1,y));
		s.push(pair<int,int>(x+1,y));
		s.push(pair<int,int>(x,y-1));
		s.push(pair<int,int>(x,y+1));
	}
}
 
int main() {
	int ans = 0;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		string s; cin >> s;
		vector<bool> row;
		for(auto c : s){
			if(c=='#') row.push_back(0);
			else row.push_back(1);
		}
		grid.push_back(row);
	}
 
	for(int y=0; y<n; y++){
		for(int x=0; x<m; x++){
			if(!grid[y][x]) continue;
			dfs(x,y);
			ans+=1;
		}
	}
 
	cout<<ans;
}