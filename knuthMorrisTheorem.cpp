#include <iostream>
#include <string>
using namespace std;


vector<int> LPSCal(string pattern){
    vector<int> LPS(pattern.size());
    LPS[0] = 0;
    int length = 0;
    int i = 1;
    while(i<pattern.size()){
        if(pattern[i] == pattern[length]){
            length++;
            LPS[i] = length;
            i++;
        } else {
            if(length != 0){
                length = LPS[length-1];
            } else{
                LPS[i]= 0;
                i++;
            }
        }
    }
    return LPS;
}

vector<int> KMP(vector<int> LPS,string text,string pattern){
    vector<int> result;
    int i = 0;
    int j = 0;
    while(i< text.size()){
        if(text[i] == pattern[j]){
            i++;j++;
        } 
        if
        (j == pattern.size()){;
            result.push_back(i-j+1);
            j = LPS[j-i];
        } else if(pattern[j] != text[i]){
            if(j!=0){
                j = LPS[j-1];
            } else {
                i++;
            }
        }
    }
    return result;
}
int main(){
    string s1 = "ababababac";
    string s2 = "abababac";
    vector<int> LPS = LPSCal(s2);
    vector<int> res = KMP(LPS,s1,s2);
    cout << res[0];
}


vector<int> lPS(vector<int> pattern){
    vector<int> lps(pattern.size());
    int length = 0;
    lps[0] = 0;
    int i = 1;
    while(i<pattern.size())
    {
        if(pattern[i] == pattern[length]){
            length++;
            lps[i] = length;
            i++;
        } else if(length > 0){
            length = lps[length-1];
        } else {
            i++;
        }
    }
    return lps;
}

bool KMP(vector<int> pattern, vector<int> arr, vector<int> LPS){
    int i = 0;
    int j = 0;
    while(i<arr.size()){
        if(pattern[j] == arr[i]){
            i++;
            j++;
        }
        if(j == pattern.size()){
            return true;
        } else if(j>0){
            j = LPS[j-1];
        } else {
            i++;
        }
    }
    return false;
}