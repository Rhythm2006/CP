#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k = 0;k<t;k++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int start = 0;
        int flag = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '#'){
                if(start == 1){
                    count += 1;
                }
                if(start >1){
                count+=2;
                }
                if(start > 2 ){
                    count = 2;
                    flag =1;
                    break;
                }

                start = 0;
            } else{
                start+=1;
            }
        }
        if(flag == 0){

            if(start == 1){
                count+=1;
            }else if(start > 2 ){
                count = 2;
                flag =1;
            }
            else if(start>1){
                count+=2;
            } 
            
            
        }
    
        cout <<count<<endl;
    }
    
    

}