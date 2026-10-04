#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int z = 0;z<t;z++){
        int n;
        cin >> n;
        int flag = 0;
        vector<int> rcd(n);
        for(int i = 0;i<n;i++){
            cin >> rcd[i];
        }
        if(rcd[0] == 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;

}