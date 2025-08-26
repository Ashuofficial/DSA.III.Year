
// Find Second Max Element from an array on following conditions:
// array modification not allowed,
// all integers are positive

#include<iostream>
using namespace std;

int SecondMax(int arr[], int n){
    int max=INT_MIN, secmax=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }else if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
        }
    }

    return secmax==INT_MIN? -1 : secmax;
}

int main(){
    int arr[]={5,7,2,3,9,11,5,55, 13};
        int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"second max: "<<SecondMax(arr, size);
    return 0;
}