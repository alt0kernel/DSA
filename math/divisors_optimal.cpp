#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
            if(i!=n/i){
                arr.push_back(n/i);
            }

        }
    }
    sort(arr.begin(),arr.end());
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<"\n";
    return 0;
}