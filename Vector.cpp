#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> numbers = {1,2,3,4,5,6,7,8,9};

    /*
    To add an element to the vector, you can use the .push_back() function,
     which will add an element at the end of the vector
    */
   numbers.push_back(10);
    numbers[2]=5;  //change the value of index 2

        // loop throug the vector
    for(int i=0;i<=numbers.size();i++){
        cout<<numbers[i]<<"\n";
    }
    

    // output the first and last element of vector

    cout<<"print the first and last element of vector"<<"\n";

    cout<<numbers.front()<<"\n";
    cout<<numbers.back()<<"\n";

    return 0;
}