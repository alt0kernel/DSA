#include<bits/stdc++.h>
using namespace std;

int func(int n){
    int increment{1};
    if(n==1){
        return 0;
    }
    else{
        cout<<increment;
        increment++;
        func(n-1);
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int func(n);
}