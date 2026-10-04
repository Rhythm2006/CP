#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x;
    cin >> x;
    vector<string> rcd(x);
    int sum = 0;
    for(int i = 0;i<x;i++){
        cin >> rcd[i];
    }
    for(int i = 0;i<x;i++){
        for(int j = 0;j<rcd[i].size();j++){
            if(rcd[i][j] == '+'){
                sum++;
                break;
            }
            if(rcd[i][j] == '-'){
                sum--;
                break;
            }
        }
    }
    cout << sum;
    return 0;
}