#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    vector<int> nums(3); for(int i=0;i<3;i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    
    int d1 = nums[1]-nums[0]-1;
    int d2 = nums[2]-nums[1]-1;
    int mi,mx;
    if(d1 == 0 && d2 == 0) mi=mx=0; 
    else if((d1 == 0 || d2 == 0) && (d1==1 || d2==1)) mi=mx=1;
    else{ 
        mx = max(d1,d2);
        mi = d1 == 1 || d2 == 1 ? 1 : 2;
    }
    cout<<mi<<'\n'<<mx;
    return 0;
}