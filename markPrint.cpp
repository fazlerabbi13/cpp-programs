#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        if(n==0){
            cout<<0<<"\n";
        }else if(n>0){
            cout<<10<<"\n";
        }
    }
    return 0;
}