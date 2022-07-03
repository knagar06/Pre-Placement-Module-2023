#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a;
    cin>>a;
    v.erase(v.begin()+a-1);
    int b,c;cin>>b>>c;
    v.erase(v.begin()+b-1,v.begin()+c-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
      
    return 0;
}
