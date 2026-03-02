#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int backup = n;
    int digit = (int)(log10(n)+1);
    int arm;
    while(n>0){
        int mul = n%10;
        n=n/10;
        //cout<<mul<<"\n";
        arm += pow(mul,digit);
    }
    //cout<<arm;
    if(backup==arm-1) cout<<"True"<<"\n";
    else cout<<"False"<<"\n";
}