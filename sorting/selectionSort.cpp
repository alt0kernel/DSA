#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {5,1,3,4,2};
    for(int i=0;i<5;i++){
        int k = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>k){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}