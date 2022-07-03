#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,q;
    cin>>n>>q;
    vector<vector<int>>ans;
    while(n--)
    {
        int size;
        cin>>size;
        vector<int>v;
        for(int i=0;i<size;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        ans.push_back(v);
        
    }
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<ans[a][b]<<endl;
    }
    
    
    return 0;
}