#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    // Preparing queary
    int query=4;
    cout<<hash[query];

}