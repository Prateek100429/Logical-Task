#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& input){
    int min = INT_MAX;
    for(int i = 0; i < input.size();i++){
        if(input[i] < min)
            min = input[i];
    }
   // cout<<min;
    return min;
}
int solve(vector<int>& input){
    int mini = findMin(input);
    int s = input.size()-1;
    return mini*s;
}

int main() 
{
    vector<int> input;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    
    cout<<solve(input);
    return 0;
}