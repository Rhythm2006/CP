#include <iostream>
#include <vector>
using namespace std;

void express(vector<int> &numb,int sum,int index,int n,int x,vector<int> &rcd){
    if(index>=n-1){
        if(sum == x){
            rcd.push_back(1);
        }
        return;
    }
    express(numb,sum+numb[index+1],index+1,n,x,rcd);
    express(numb,sum-numb[index+1],index+1,n,x,rcd);
}
int main(){
    int N,X;
    cin >> N; cin >> X;
    vector<int> numb;
    for(int i = 0;i<N;i++){
        int n;
        cin >> n;
        numb.push_back(n);
    }
    vector<int> rcd;
    express(numb,numb[0],0,N,X,rcd);
    if(rcd.size()>0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}