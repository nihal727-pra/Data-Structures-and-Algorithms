// NUMBER HASHING

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[n]={1,2,3,4,5};

//     // precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }

//     // Preparing queary
//     int query=4;

//     cout<<hash[query];

// }

// STRING HASHING
// #include <iostream>

// using namespace std;

// int main() {
//     string s="abcdef";

//     // SIZE OF HASH I S26 BECAUSE THE STRING HAS ONLY LOWER CASE ELEMENTS 

//     // PRECALUCLATION / OR / HASING
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }

//     // generating queary
//     char c='f';
    
//     // fetch
//     cout<<hash[c-'a'];
//     return 0;
// }


// SOLVING PROBLEM OF NUMBER HASHING USING MAP
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n=7;
//     int arr[n]={1,2,3,1,3,2,12};

//     // pre comput
//     unordered_map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]] += 1;
//     }

//     // querry
//     int query = 3;
//     cout<<mpp[query];

//     return 0;
// }

