#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout<<"type 111000111000111000 then press enter and type any other number to exit"<<endl;
    while (true) {
        cout<<"enter 2 numbers"<<endl;
        cin>>a>>b;
        cout<<"result of the problem"<<endl;
        cout<<"with +: "<<a+b<<endl;
        cout<<"with -: "<<a-b<<endl;
        cout<<"with *: "<<a*b<<endl;
        cout<<"with /: "<<a/b<<endl;
        if (a == 111000111000111000) {
            break;
        }
    }
    return 0;
}