#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        int x;
        cin >> n;
        cin >>x;
        int elMax = 0;
        vector<int> arr(n);
        for(int j = 0;j<n;j++){
            cin >> arr[j];
        }
        
        if(n<=1){
            elMax = max(arr[0],2*(x-arr[0]));
        } else {
            for(int j = 0;j<n;j++){
                if(j == 0 ){
                    elMax = max(0,arr[j]);
                    
                } else if(j == n-1){
                    elMax = max(elMax,arr[j]-arr[j-1]);
                    elMax = max(elMax,2*(x-arr[j]));
                    
                } else {
                    elMax = max(elMax,arr[j]-arr[j-1]);
                    
                }
                
            }
        }
        
        cout << elMax << endl;
    }
    return 0;
    

}