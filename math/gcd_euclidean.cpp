#include<bits/stdc++.h>
using namespace std;

int findGcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a=temp;
        cout<<b<<" "<<a<<"\n";
    }
    return a;
}


int main(){
    int n1 = 9,n2=12;
    int gcd = findGcd(n1,n2);
    cout<<gcd<<"\n";
    return 0;
}