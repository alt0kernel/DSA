#include<bits/stdc++.h>
using namespace std;

int main(){
    int old,rev{0};
    cin>>old;
    while(old>0){
        int rem = old%10;
        old = old/10;
        rev = rev*10+rem;
    }
    cout<<rev<<"\n";
    return 0;
}