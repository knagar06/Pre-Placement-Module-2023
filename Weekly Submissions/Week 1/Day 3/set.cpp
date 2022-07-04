#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        set<int>::iterator it;
        int y,x;
        cin>>y;
        if(y==1)
        {
            cin>>x;
            s.insert(x);
        }
        else if(y==2)
        {
            cin>>x;
            s.erase(x);
        }
        else if(y==3)
        {
            cin>>x;
            it=s.find(x);
            if(it!=s.end())
            cout<<"Yes"<<endl;
            else {
            cout<<"No"<<endl;
            }
        }
    }
      
    return 0;
}



