#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("pails.in", "r", stdin);
    int x,y,m; cin >> x >> y >> m;
    int yCnt = 0;
    int xCnt = (int)floor(m/x);
    int mx = -1;
    while (xCnt > 0){
        int r = m - (x * xCnt);
        int newY = (int)floor(r/y);
        yCnt = newY > 0 ? newY : 0;
        mx = max((xCnt * x)+(yCnt * y), mx);
        xCnt-=1;
    }

    freopen("pails.out", "w", stdout);
    cout << mx;
    return 0;
}