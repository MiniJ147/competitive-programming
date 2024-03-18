#include <bits/stdc++.h>
using namespace std;

#define SIZE 8

vector<vector<bool>> board(SIZE);
uint32_t cnt = 0;

void search(int x, int y, vector<vector<bool>> curr){
    if(x >= SIZE) return;
    if(y == SIZE-1 && curr[y][x]) {cnt+=1; return;}
    if(!curr[y][x]) return;

    for(int i=0; i<SIZE; i++) {
        curr[y][i] = 0;
        curr[i][x] = 0;
    }

    int y1; int y2; y1 = y2 = y;
    for(int i=x; i<SIZE; i++){
        if(y1 >= 0) curr[y1][i] = 0;
        if(y2 < SIZE) curr[y2][i] = 0;
        y1-=1;
        y2+=1; 
    }

    y1 = y2 = y;
    for(int i=x; i>=0; i--){
        if(y1 >= 0) curr[y1][i] = 0;
        if(y2 < SIZE) curr[y2][i] = 0;
        y1-=1;
        y2+=1; 
    }

    /*for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            cout << curr[i][j] << ' ';
        }
        cout<<endl;
    }

    cout << endl << endl;*/

    for(int i=0; i<SIZE; i++){
        search(i,y+1,curr);
    }
}

int main(){
    for(int i=0; i<SIZE; i++){
        string line; cin >> line;
        for(int j=0; j<line.size(); j++){
            if(line[j]=='.') board[i].push_back(1);
            else board[i].push_back(0);
        }
    }
    for(int i=0; i<SIZE; i++){
        search(i,0,board);
    }
    /*for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            cout << board[i][j] << ' ';
        }
        cout<<endl;
    }*/
    cout << cnt;
    return 0;
}