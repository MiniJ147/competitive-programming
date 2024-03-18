#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("shell.in", "r", stdin);

	int n; cin >> n;
    vector<int> shells = {1,2,3};
    vector<int> score = {0,0,0};
    
    for(int i=0; i<n; i++){
        int a,b,g; cin >> a >> b >> g;
        swap(shells[a-1],shells[b-1]);
        score[shells[g-1]] += 1;
    }
	freopen("shell.out", "w", stdout);
	cout << std::max({score[0], score[1], score[2]});
	return 0;
}
 