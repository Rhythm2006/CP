#include <iostream>
#include <vector>
using namespace std;


void rec(vector<int> &A,vector<int> &B,int &count,int &m,int &n){
    if(count >= m*n) return;
    if(count%n == 0 && count >0){
        cout << endl;
    }
    cout << A[count] + B[count] << " ";
    count+=1;
    rec(A,B,count,m,n);

}
int main(){
    int m,n;
    cin >> m;
    cin >> n;
    vector<int> A(m*n);
    vector<int> B(m*n);
    for(int i = 0;i<m*n;i++){
        cin >> A[i];
    }
    for(int i = 0;i<m*n;i++){
        cin >> B[i];
    }
    int count = 0;
    rec(A,B,count,m,n);
    return 0;

}