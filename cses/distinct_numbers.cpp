#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    ll cnt = 0;
    set<ll> found;
    while(n>0){
        ll c; cin >> c;
        if(found.find(c)==found.end()){ 
            cnt+=1;
            found.insert(c);
        }
        n--;
    }
    cout << cnt;
    return 0;
}