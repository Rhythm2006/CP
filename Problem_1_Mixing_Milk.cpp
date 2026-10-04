#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<int> cap(3);
    vector<int> curr(3);
    for(int i = 0;i<3;i++){
        cin >> cap[i];
        cin >> curr[i];
    }
    for(int i = 1;i<=100;i++){
        int tar = i%3;
        if(tar == 1){
            int sub = min(curr[0],cap[1] - curr[1]);
            curr[0]-=sub;
            curr[1]+=sub;
        } else if(tar == 2){
            int sub = min(curr[1],cap[2]-curr[2]);
            curr[1]-=sub;
            curr[2]+=sub;
        } else {
            int sub = min(curr[2],cap[0]-curr[0]);
            curr[2]-=sub;
            curr[0]+=sub;
        }
    }
    for(int i = 0;i<3;i++){
        cout << curr[i] << endl;
    }
    return 0;
}