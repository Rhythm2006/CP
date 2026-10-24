#include <iostream>
using namespace std;


int seqGen(int n){
    if(n == 1){
        return 1;
    }
    if(n%2 == 0){
        return 1+ seqGen(n/2);
    } else {
        return 1 + seqGen((3*n)+1);
    }
}
int main(){
    int n;
    cin >> n;
    cout << seqGen(n);
    return 0;
}