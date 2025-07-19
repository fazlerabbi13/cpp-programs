#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vector(n);

    for(int i=0;i<vector.size();i++){
        cin>>vector[i];
    }

    return 0;
}