#include <bits/stdc++.h>
using namespace std;
 
vector<long long> w;
 
long long divide(int i, int n, long long g1, long long g2){
    if(i==n) return abs(g1-g2);
 
    return min(
        divide(i+1,n,g1+w[i],g2),
        divide(i+1,n,g1,g2+w[i])
    );
}
 
int main(){
    int n; cin >> n;
    w.resize(n);
    for(int i=0; i<n;i++) cin >> w[i];
    cout << divide(0,n,0,0);
    return 0;
}