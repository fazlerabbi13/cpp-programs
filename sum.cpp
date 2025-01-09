#include <iostream>
using namespace std;

int main(){
    int sum=0,length;
    int age[5] = {20, 22 , 15, 30, 10};

    length = sizeof(age)/sizeof(age[0]);

    for(int i=0;i<length;i++){
        sum=sum+age[i];
    }

    cout<<sum<<endl;

}