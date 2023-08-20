#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    cout<<a.size()<< " "<<b.size()<<endl;
    char c=a[0],d=b[0];
    cout<<a+b<<endl;
    a[0]=d;b[0]=c;
    cout<<a<<" "<<b;
    return 0;
}
