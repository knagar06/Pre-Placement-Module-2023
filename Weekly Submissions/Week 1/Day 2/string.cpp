#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1+s2<<endl;
    string t;
    t[0]=s1[0];
    s1[0]=s2[0];
    s2[0]=t[0];
    cout<<s1<<" "<<s2;
    
    
    return 0;
}