#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int a[] = {12, 34, 11, 9, 3};
    int b[] = {2, 1, 5};
    unordered_map<int,int> mp;
    for(int &it : a){
        if(mp[it]>=1){
            cout<<"False";
            return 0;
        }
        mp[it]++;
    }
    for(int &it : b){
        if(mp[it]>=1){
            cout<<"False";
            return 0;
        }
        mp[it]++;
    }
 cout<<"True";
 return 0;
}