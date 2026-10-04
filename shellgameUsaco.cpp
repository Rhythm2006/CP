#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;



int main(){

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n;
    cin>>n;
    vector<vector<int>> rcd(n,vector<int>(3));
    vector<int> res;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin >> rcd[i][j];
        }
    }
    for(int z = 1;z<=3;z++){
        int num = z;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(rcd[i][0] == num || rcd[i][1] == num){
                if(rcd[i][0] == num){
                    num = rcd[i][1];
                } else {
                    num = rcd[i][0];
                }
            }
            if(num == rcd[i][2]){
                count++;
            }
        }
        res.push_back(count);
    }
    if(res.size()>0){
        int resMax = *max_element(res.begin(),res.end());
        cout << resMax;
    } else {
        cout << 0;
    }
    
    return 0;
}
