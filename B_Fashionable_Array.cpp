#include <iostream>
#include <vector> 
#include <map>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int z = 0; z<t;z++){
        int n;
        cin >> n;
        int maxn = -1;
        vector<int> rcd(n);
        map<int,int> mpp;
 
        for(int i = 0;i<n;i++){
            cin >> rcd[i];
            maxn = max(maxn,rcd[i]);
        }

    }
}