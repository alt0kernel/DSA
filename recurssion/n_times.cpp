#include<bits/stdc++.h>
using namespace std;

int n_times(int n){
    cout<<"Nithin"<<"\n";
    if(n==1){
        return 0;
    }
    n_times(n-1);
    return 0;
}
int main(){
    int n;
    cin >> n;
    n_times(n);
}