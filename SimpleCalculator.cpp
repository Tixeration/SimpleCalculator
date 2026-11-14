#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout<<"enter 2 numbers (one by one)"<<endl;
    while (true) {
        cin>>a>>b;
        cout<<"result of the problem"<<endl;
        cout<<"with +: "<<a+b<<endl;
        cout<<"with -: "<<a-b<<endl;
        cout<<"with *: "<<a*b<<endl;
        cout<<"with /: "<<a/b<<endl;
    }
    return 0;
}