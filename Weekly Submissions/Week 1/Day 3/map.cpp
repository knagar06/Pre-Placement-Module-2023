#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        string s;
        int x;
        if(y==1)
        {
            
            cin>>s>>x;
            if(m.count(s))
            {
                m[s]+=x;
            }
            else {
            m[s]=x;
            }
        }
        
        else if(y==2)
        {
            cin>>s;
            m.erase(s);
        }
        else if(y==3)
        {
            cin>>s;
            cout<<m[s]<<endl;
        }
    }
    
    
    return 0;
}
