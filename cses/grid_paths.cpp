#include <bits/stdc++.h>
using namespace std;

//0 based
#define LEN 7

string c = "DULR";
string desc;
int cnt = 0;

void search(int i, int x, int y, string path){
    if(i > 0){
        switch(path[i-1]){
            case 'D':
                y-=1;
            break;
            case 'U':
                y+=1;
            break;
            case 'L':
                x-=1;
                break;
            case 'R':
                x+=1;
                break;
        }
    }

    if(x < 0 || x >= LEN || y < 0 || y >= LEN) return;
    if(i>=desc.size()){
        cout << path << endl;
        return;
    }
    
    if(desc[i] != '?') {
        path+=desc[i];
        search(i+1,x,y,path);
    }else{
        for(int j=0; j<c.size(); j++){
            search(i+1,x,y,path+c[j]);
        }
    }
}

int main(){
    cin >> desc;

    search(0,0,0,desc);

    cout << cnt;
    return 0;
}