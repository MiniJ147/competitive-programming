#include <bits/stdc++.h>
using namespace std;

string r1, r2;
map<pair<int,int>,bool> visted;

int dfs(int i, int j, int n);

int dfs(int i, int j, int n){
    if(i == n-1 && j==1) return 1;
    if(i < 0 || i>=n || j < 0 || j>1 || visted.find(make_pair(i,j))!=visted.end()) return 0;
    //visted.insert({make_pair(i,j),1});
    if(r1[i],r2[j]=='>') i+=1;
    else i-=1;

    return dfs(i+1,j,n) || dfs(i-1,j,n) || dfs(i,j-1,n) || dfs(i,j+1,n);
}

void test(){
    int n; cin>>n;
    cin >> r1 >> r2;
    if(dfs(1,0,n) || dfs(0,1,n)) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t > 0){
        test();
        t--;
    }
    return 0;
}