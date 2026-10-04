#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
    int n;
    cin >> n;
    int d;
    cin >> d;
    int count = 0;
    vector<int> rcd(n);
    set<int> res;
    int flag = 0;
    for(int i = 0;i<n;i++){
        cin >> rcd[i];
    }
    for(int i = 0;i<n;i++){
        int flag = 0;
        for(int j = 0;j<n;j++){            
            if(abs(rcd[i]-rcd[j]) < d && i!=j){
                flag = 1;
            }
        }
        if(flag == 0){
                res.insert(i+1);
        }
    }
    if(res.size()>0){
        cout << res.size() << endl;
        for(auto it :res){
        cout <<  it << " ";
        }
    } else {
        cout << res.size();
    }
    
    return 0;

}