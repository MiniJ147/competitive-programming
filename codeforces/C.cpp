#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s = "";
    int n; int m; cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    string coms; cin >> coms;
    int l; int r; l = 0; r = n-1;
    ll rightPre = 1;
    ll leftPre = 1;
    for(int i=0; i<n; i++) rightPre *= a[i];
    for(auto com : coms){
        cout << (rightPre/leftPre)%m << " ";
        if(com == 'L'){
            leftPre *= a[l];
            l+=1;
        }else{
            rightPre = rightPre/a[r];
            r-=1;
        }
    }
    cout << s << endl;
}

int main(){
    int t; cin >> t;
    while(t>0){
        solve();
        t--;
    }
    return 0;
}