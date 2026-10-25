#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Greedy Algo - Fails;
// void rec(vector<vector<int>> &rcd,vector<int> &l, int W,int index,int &sum,int &weight){
//     if(index>=rcd.size()) return;
//     weight+=rcd[index][0];
//     sum += rcd[index][1];
//     if(weight>W){
//         int gap = weight - W;
//         int flag = 0;
//         int tar;
//         int in;
//         for(int i = 0;i<=index;i++){
//             if(rcd[i][0] >= gap){
//                 if(flag == 0){
//                     tar = rcd[i][1];
//                     in = i;
//                     flag = 1;
//                 } else {
//                     if(rcd[i][1] <= tar && find(l.begin(),l.end(),i) == l.end()){
//                         tar = rcd[i][1];
//                         in = i;
//                     }
//                 }
//             }
//         }
//         l.push_back(in);
//         sum -= rcd[in][1];
//         weight -= rcd[in][0];
//     }
//     rec(rcd,l,W,index+1,sum,weight);
// }
// int main(){
//     int N;
//     int W;
//     cin >> N;
//     cin >> W;
//     vector<vector<int>> rcd;
//     vector<int> l;
//     for(int i = 0;i <N;i++){
//         int m;
//         int n;
//         cin >> m;
//         cin >> n;
//         vector<int> sub;
//         sub.push_back(m);
//         sub.push_back(n);
//         rcd.push_back(sub);
//     }
//     int sum = 0;
//     int weight = 0;
//     rec(rcd,l,W,0,sum,weight);
//     cout << sum;
    

// }

void knapsack(vector<vector<int>> &rcd, vector<int> &l,int W, int N, int index,int sum,int weight){
    if(index>=N){
        l.push_back(sum);
        return;
    } 
    if(weight + rcd[index][0]>W){
        knapsack(rcd,l,W,N,index+1,sum,weight);
    } else {
        knapsack(rcd,l,W,N,index+1,sum,weight);

        sum+= rcd[index][1];
        weight += rcd[index][0];
        knapsack(rcd,l,W,N,index+1,sum,weight);
    }
};
int main(){
    int N;
    int W;
    cin >> N;
    cin >> W;
    vector<vector<int>> rcd;
    vector<int> l;
    for(int i = 0;i <N;i++){
        int m;
        int n;
        cin >> m;
        cin >> n;
        vector<int> sub;
        sub.push_back(m);
        sub.push_back(n);
        rcd.push_back(sub);
    }
    knapsack(rcd,l,W,N,0,0,0);
    int el = *max_element(l.begin(),l.end());
    cout << el;
    return 0;
}

