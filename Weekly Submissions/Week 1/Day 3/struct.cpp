#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct st
{
    public:
    int x,y;
    string a,b;
    st(int x,string a, string b,int y)
    {
        this->x=x;
        this->a=a;
        this->b=b;
        this->y=y;
    }
    
};


int main() {
    int x,y;
    string a,b;
    cin>>x>>a>>b>>y;
    st s(x,a,b,y);
    cout<<s.x<<" "<<s.a<<" "<<s.b<<" "<<s.y<<endl;
    
    
    return 0;
}
