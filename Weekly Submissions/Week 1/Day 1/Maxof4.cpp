#include<bits/stdc++.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    if(a>b and a>c and a>d)
    return a;
    
    if(b>a and b>c and b>c)
    return b;
    
    if(c>b and c>a and c>d)
    return c;
    
    else
    return d;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}