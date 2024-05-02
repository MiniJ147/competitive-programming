#include <bits/stdc++.h>
using namespace std;

#define VAL 2147483647

void solve(){
    int cnt = 0;
    int n; cin >> n;
    vector<int> a(n);
    set<int> v = {};
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=0; i<n; i++){
        if(v.find(i) != v.end()) continue;
        v.insert(i);
        for(int j=i+1; j<n; j++){
            if(v.find(j)!=v.end()) continue;
            if((a[i] ^ a[j]) == VAL) v.insert(j);
        }
        cnt+=1;
    }
    cout << cnt << endl;
}

int main(){
    int t; cin >> t;
    while(t > 0){
        solve();    
        t--;
    }
    return 0;
}