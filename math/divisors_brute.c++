#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<"\n";
    return 0;
}