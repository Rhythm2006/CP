#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int n1;
        int n2;
        cin >> n1;
        cin >> n2;
        string x;
        string s;
        cin >> x;
        cin >> s;
        int count = 0;
        while(((x.size())*(s.size())<=25)){
            cout << x << endl;
            if(s.find(x) != string::npos){
                break;
            }
            count++;
            x+=x;
        }
        // if(count == 0){
        //     cout << -1 << endl;
        // } else {
        //     cout << count << endl;
        // }
    }
    return 0;
}