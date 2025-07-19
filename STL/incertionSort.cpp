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

    for(int i=1;i<vector.size();i++){
        int current=vector[i];
        int previous=i-1;

        while (previous>=0 && vector[previous]>current)
        {
           vector[previous+1]=vector[previous];
           previous--;
        }
        vector[previous+1]=current;
        
    }

    for (int i=0; i<vector.size();i++)
    {
        cout<<vector[i]<<" ";
    }
    

    return 0;
}