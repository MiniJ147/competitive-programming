#include <bits/stdc++.h>
using namespace std;
 
int N;
int cnt = 0;
vector<int> seg;
map<int,int> cc;
 
int search(int r){
    int l = cnt;
    int t = 0;
    while(l<r){
        if(!(r & 1)){
            t = max(t,seg[r]);
            r-=1;
        }else if(l & 1){
            t = max(t,seg[l]);
            l += 1;
        }else{
            r/=2;
            l/=2;
        }
    }
    return max(seg[r],t);
}
 
void update(int n, int v){
    seg[n] = v;
    while(n>=1){
        n >>= 1;
        seg[n] = max(seg[n], v);
    }
}
 
void print(){
    for(int i=1; i<(2*cnt);i++){
        cout << seg[i] << " ";
    }
    cout << "\n";
}
 
int main(){
    cin >> N; vector<int> nums(N);
    for(int i=0; i<N;i++) cin >> nums[i];
 
    vector<int> sorted(nums);   
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<N; i++)
        if(cc.count(sorted[i])==0) cc[sorted[i]] = cnt++;
 
    seg.resize(2*cnt);
    for(int i=0; i<N; i++){
        if(cc[nums[i]] == 0) update(cc[nums[i]]+cnt, 1);
        else update(cc[nums[i]]+cnt, search(cc[nums[i]]-1+cnt)+1);
    }
 
    cout << seg[1] << endl;
    return 0;
}