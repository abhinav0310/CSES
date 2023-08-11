#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long long x=(long long)n;
    
    while(x!=1){
        if(x%2==0){
            cout<<x<<" ";
            x=x/2;
        }
        else{
            cout<<x<<" ";
            x=x*3+1;
        }
    }
    cout<<x<<" ";
    return 0;
}