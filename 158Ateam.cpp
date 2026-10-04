#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> rcd(n);
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin >> rcd[i];
    }
    int target = rcd[k-11];
    for(int i=0;i<n;i++){
        if(rcd[i]>=target && rcd[i]>0){
            sum++;
        }
    }
    cout<< sum;
    return 0;
}