#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int z=0;z<t;z++){
        unordered_map<int,int> mpp;
        int n;
        cin >> n;
        for(int i = 0;i<n;i++){
            int c;
            cin >> c;
            mpp[c]++;
        }
        if(mpp.size()>2){
            cout << "No" << endl;
            continue;
        } else if(mpp.size()==1){
            cout << "Yes" << endl;
            continue;
        }
        auto it = mpp.begin();
        int val1 = it->second;
        ++it;
        int val2 = it->second;
        if(n%2 == 0){
            if(val1 ==val2){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            if(val1 - val2 == 1 || val2 - val1 == 1){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}