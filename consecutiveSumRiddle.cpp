#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t ;
    cin >> t;
    for(int i =0 ;i <t;i++){
        long long sum;
    cin >> sum;
    long long l;
    long long r;
    long long root = sqrtl(2.0L*sum);
    for(long long i = 1;i<=root;i++){
        if((2*sum)%i == 0){
            long long value1 = (2*sum)/i;
            long long value2 = i;
            long long tar1 = (2*sum)/value1;
            long long tar2 = (2*sum)/value2;
            if((tar1 - (value1 - 1))%2 == 0){
                l = (tar1 - (value1 - 1))/2;
                r = ((2*sum)/value1)-l;
                break;
            } else if((tar2 - (value2 - 1))%2 == 0){
                l = (tar2 - (value2 - 1))/2;
                r = ((2*sum)/value2)-l;
                break;
            }
        }
    }
    cout << l << " " << r << endl;
    }
    return 0;
    
}