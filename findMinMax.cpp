#include<iostream>
using namespace std;

int main(){
    long long a,b,c,Min,Max;

    cin>> a >>  b >> c;

    Max = max(a, max(b, c));
    Min = min(a, min(b,c));

    cout<<Min <<" "<<Max<<endl;

}