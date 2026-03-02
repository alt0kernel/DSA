#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,gc{0};
    cin>>n1>>n2;
    //cout<<min(n1,n2);
    
    for(int i=min(n1,n2);i>0;i--){
        //cout<<i<<"\n";
        if(n1%i==0 && n2%i==0){
            gc=i;
            break;
        }
    }
    cout<<gc<<"\n";
    return 0;
}