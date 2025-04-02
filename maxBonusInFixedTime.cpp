#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    vector<int> times(n);

    for(int i=0; i<n; i++){
        cin>> times[i];
    }

    sort(times.begin(),times.end());
    
    int total =0,count=0;

    for (int time : times) {
        if (total + time <= x) {
            total += time;
            ++count;
        } else {
            break;
        }
    }
    cout << count << "\n";
   return 0;
}