#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    vec.push_back(6);

    vector<int> vec1;
    vec1.push_back(2);
    
    cout<<vec1.size()<<"\n";
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    

    return 0;
}
