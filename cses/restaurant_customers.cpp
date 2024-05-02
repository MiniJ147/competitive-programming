#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<pair<ll,ll>> interval;

int main(){
    int n; cin >> n; interval.resize(n);
    for(int i=0; i<n; i++){
        int s, e; cin >> s >> e;
        interval[i] = (make_pair(s,e));
    }
    sort(interval.begin(), interval.end());
    ll b = interval[0].second;
    int mxCnt, cnt; mxCnt = cnt = 0;
    int l, r; l = r = 0;
    while(r < n){
        auto c = interval[r];
        if(c.first < b){
            cnt+=1;
            mxCnt = max(cnt, mxCnt);
            r+=1;
        }
        else if(b < c.first){
            l+=1;
            cnt-=1;
            b = interval[l].second;
        }
    }
    /*for(int i=1; i<n;i++){
        if(interval[i].first <= b){
            cnt+=1;
            mxCnt = max(cnt,mxCnt);
        }else if(interval[i].first > b){
            cnt = 1;
            b = max(interval[i-1].second, interval[i].second);
        }
    }*/
    cout << max(mxCnt,cnt);
    return 0;
}