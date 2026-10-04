#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z = 0;z<t;z++){
        int n;
        cin >> n;
        char nm;
        cin >> nm;
        string s;
        cin >>s;
        int l = 0;
        int r = n-1;
        int count = 0;
        while(l<=r){
            if(s[l] == s[r]){
                l++;
                r--;
            } else if(s[l]!=nm && s[r]!=nm){
                s[l] = nm;
                s[r] = nm;
                count+=2;
                
            } else if(s[l]!=nm){
                s[l] = nm;
                count+=1;
            } else if(s[r]!=nm){
                s[r] = nm;
                count+=1;
            }
        }
        cout << count << endl;
    }
    return 0;
}