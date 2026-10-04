#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int z = 0;z<t;z++){
        int n;
        int k;
        cin >>n;
        cin >> k;
        vector<long long> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int flag = 0;
        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                flag = 1;
            }
        }
        if(flag == 0){
            cout << "YES" << endl;
           
        } else {
            if(k>=2){
                cout << "YES"<< endl;
            } else {
                cout << "NO"<< endl;
            }
        }
        
        
    }
    
    return 0;
}