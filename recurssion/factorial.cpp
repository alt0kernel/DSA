#include<bits/stdc++.h>
using namespace std;
int func(int input){
    if(input == 1) return 1;
    return input * func(input-1);
}
int main(){
    int n;
    cin>>n;
    cout<<func(n)<<"\n";
}