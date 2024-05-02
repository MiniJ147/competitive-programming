#include <bits/stdc++.h>
using namespace std;
 
vector<int> cache(1e6+1,-1);
 
int dfs(int n){
    if(n==0) return 0;
    if(n<10) return 1;
    if(cache[n]!=-1) return cache[n];
 
    int mi = 1e9;
    int newN = n;
    while(newN>0){
        int d = newN%10;
        if(d!=0){
            int calc = n-d;
            //cout<<d<<" "<<n<<endl;
            mi = min(mi,dfs(calc)+1);   
        }
        newN /= 10;
    }
 
    cache[n] = mi;
    return mi;
}
 
int main() {
    cache[0] = 0;
	int n; cin >> n;
    cout<<dfs(n);
 
    return 0;
