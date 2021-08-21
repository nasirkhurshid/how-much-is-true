#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numoftrue(bool arr[], int n) {
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==true){
            count++;
        }
    }
    return count;
}

int numoftrue(vector<int> arr){
    return count(arr.begin(), arr.end(), true);
}

int main()
{
    bool arr[5]={true, false, false, true, false};
    vector<int> vec={true, false, false, true, true};
    cout<<"Number of true in array: "<<numoftrue(arr,5);
    cout<<"\nNumber of true in vector: "<<numoftrue(vec);
    return 0;
}