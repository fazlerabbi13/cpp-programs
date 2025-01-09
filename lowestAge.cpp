#include <iostream>
using namespace std;

int main(){
    int length,lowestAge;
    int age[5] = {20, 22 , 15, 30, 10};

    length = sizeof(age)/sizeof(age[0]);

    lowestAge = age[0];

    for(int i=0;i<length;i++){
        if(lowestAge>age[i]){
            lowestAge=age[i];
        }
    }

    cout<<lowestAge<<endl;
}