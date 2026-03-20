#include<bits/stdc++.h>
using namespace std;

int func(int n){
    cout<<n<<"\n";
    if(n<=0) return 0;
    else return func(n-1);
}
int main(){
    int n{0};
    cin>>n;
    func(n);
    return 0;
}