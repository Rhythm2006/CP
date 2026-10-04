#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    vector<string> arr(x);
    for(int i = 0;i<x;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<x;i++){
        if(arr[i].size()>10){
            char start = arr[i][0];
            char end = arr[i][arr[i].size()-1];
            int count = arr[i].size()-2;
            cout << start << count << end << endl;
        } else {
            cout << arr[i] << endl;
        }
    }
    return 0;
}