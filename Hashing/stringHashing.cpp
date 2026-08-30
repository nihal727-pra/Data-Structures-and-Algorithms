
// STRING HASHING
#include <iostream>

using namespace std;

int main() {
    string s="abcdef";

    // SIZE OF HASH I S26 BECAUSE THE STRING HAS ONLY LOWER CASE ELEMENTS 

    // PRECALUCLATION / OR / HASING
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    // generating queary
    char c='f';
    
    // fetch
    cout<<hash[c-'a'];
    return 0;
}