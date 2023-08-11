#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>arr;
    
    int x;
    for(int i=0; i<n-1; i++){
        cin>>x;
        arr.push_back(x);
    }
    
    int xori=0;
    
    for(int i=0; i<n-1; i++)
        xori=xori^arr[i];
    
    
    for(int i=1; i<=n; i++)
        xori=xori^i;
    
    cout<<xori<<endl;
    return 0;
}