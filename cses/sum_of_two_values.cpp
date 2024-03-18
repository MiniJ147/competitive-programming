#include <bits/stdc++.h>
using namespace std;

vector<int> v;
map<int,vector<int>> result;

int main(){
    int n, x; cin >> n >> x;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        result[t].push_back(i);
    }
    
    for(const auto& p : result){
        int target = x - p.first;
        if(result.find(target)!=result.end()){
        //cringe cheese but who cares
            for(int j=0; j<result[target].size(); j++){
                if(result[target][j] != p.second[0]){
                    int a = result[target][j]+1;
                    int b = p.second[0]+1;
                    if(a<b) cout << a << ' ' << b;
                    else cout << b << ' ' << a;
                    return 0;
                }
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}