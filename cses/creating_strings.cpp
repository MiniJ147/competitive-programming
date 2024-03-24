#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;
    sort(s.begin(),s.end());
    vector<string> perms; 
    do{
        cnt+=1;
        perms.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<cnt<<endl;
    for(int i=0; i<perms.size();i++) cout<<perms[i]<<endl;
    return 0;
}