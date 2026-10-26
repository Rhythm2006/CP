#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

//my way
void rec(vector<string> &rcd,string s1,string s2){
    if(s2.size() <= 0){
        rcd.push_back(s1);
        return;
    }
    unordered_set<string> rcd1; 
    for(int i = 0;i<s2.size();i++){
        string ch(1, s2[i]);
        if(rcd1.find(ch) != rcd1.end()) continue;
        string rem = "" + s2.substr(0,i) + s2.substr(i+1);
        rcd1.insert(ch);
        rec(rcd,s1+ch,rem);

    }
}
// the other way
void backtracking(vector<string> &allstrings,vector<int> &freq,int index,int size,string curr){
    if(index>=size){
        allstrings.push_back(curr);
        return;
    }
    for(int i = 0;i<26;i++){
        if(freq[i] > 0){
            freq[i]--;
            backtracking(allstrings,freq,index+1,size,curr+char('a'+'i'));
            freq[i]++;
        }
    }
}


int main(){
    string f;
    cin >> f;
    vector<string> rcd;
    rec(rcd,"",f);
    cout << rcd.size() << endl;
    sort(rcd.begin(),rcd.end());
    for(auto each:rcd){
        cout << each << endl;
    } 

    
}