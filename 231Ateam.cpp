#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        int count = accumulate(arr[i].begin(),arr[i].end(),0);
        if(count >= 2){
            sum++;
        }
    }
    cout << sum;
    return 0;

}