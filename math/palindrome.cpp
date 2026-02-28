#include<bits/stdc++.h>
using namespace std;

int main(){
    int old,rev{0};
    cin>>old;
    int backup = old;
    while(old>0){
        int rem = old%10;
        old = old/10;
        rev = rev*10+rem;
    }
    if(backup==rev) cout<<"Palindrome"<<"\n";
    else cout<<"Not Palindrome"<<"\n";
    return 0;
}