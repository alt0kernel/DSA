#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,gc{0};
    cin>>n1>>n2;
    //cout<<n1<<n2;
    for(int i=1;i<min(n1,n2);i++){
       // cout<<i;
        if(n1%i==0 and n2%i==0){
            gc=i;
        }
    }
    cout<<gc<<"\n";
    return 0;
}