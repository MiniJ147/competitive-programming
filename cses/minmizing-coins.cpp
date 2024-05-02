#include <bits/stdc++.h>
using namespace std;
 
vector<int> coins;
vector<int> memo(1e6+1);
int n;
 
int dfs(int x){
    if(x<0) return 1e7;
    if(memo[x] != 0) return memo[x];
    if(x==0) return 0;
 
    int mi = 1e7;
    for(int i=0; i<n; i++){
        mi = min(mi, dfs(x-coins[i])+1);
    }
    return memo[x] = mi;
}
 
int main(){
    int x; cin >> n >> x;
    coins.resize(n);
    for(int i=0; i<n; i++) cin >> coins[i];
    int ans = dfs(x);
    cout << (ans == 1e7 ? -1 : ans) << endl;
    return 0;
}
