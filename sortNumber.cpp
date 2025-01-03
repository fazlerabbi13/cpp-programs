#include <iostream>
using namespace std;

int main(){

    int a,b,c,temp;

    cout<<"enter three number: ";
    cin>>a>>b>>c;

    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    else if(a>c){

        temp = a;
        a = c;
        c = temp;
    }
    else if(b>c){
        temp = b;
        b = c;
        c = temp;
    }

    cout<<"sorted number: "<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}