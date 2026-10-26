#include <iostream>
#include <string>
using namespace std;
//optimize it;
int main(){
   int n;
   cin >> n;
   while(n--){
    int n1;
    int n2;
    cin >> n1; cin >> n2;
    string s1,s2;
    cin>>s1; cin >> s2;
    int count = 0;
    int flag = 0;
    while(s1.size()<=s2.size()){
        int res = s1.find(s2);
        if(res != string::npos){
            flag = 1;
            break;
        } else {
            s1+=s1;
            count+=1;
        }
    }
    int res = s1.find(s2);
    if(res != string::npos){
        flag = 1;
    } else {
        s1+=s1;
        count += 1;
        res = s1.find(s2);
        if(res != string::npos){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }
   }
}

// if(res >= 0){
    //     flag = 1;
    // } else {
    //     while(1){
    //         s1+=s1;
    //         count+=1;
    //         res = s1.find(s2);
    //         if(res>=0){
    //             flag = 1;
    //             break;
    //         }
    //         if(s1.size()>= 2 * s2.size()){
    //             break;
    //         }
    //     }
    // }
    // while(subCount--){
    //     // cout << s1<<endl;
    //     int res = s1.find(s2);
    //     // cout << "res" << res<<endl;
    //     if(res >= 0){
    //         flag = 1;
    //         break;
    //     } else {
    //         s1+=s1;
    //         count +=1;
    //     }
        
    // }