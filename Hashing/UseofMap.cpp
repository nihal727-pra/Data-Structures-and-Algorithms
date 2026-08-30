// SOLVING PROBLEM OF NUMBER HASHING USING MAP
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=7;
    int arr[n]={1,2,3,1,3,2,12};

    // pre comput
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]] += 1;
    }

    // querry
    int query = 3;
    cout<<mpp[query];

    return 0;
}