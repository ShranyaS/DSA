#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}
int returnMax(int arr[], int n){
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int returnMin(int arr[], int n){
    int mini = INT32_MAX;
    for (int i = 0; i<n; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}
int main(){
    int arr[50];
    int inputArr, size;
    cout<<"Input the number of values you wanna put: ";
    cin>>size;
    cout<<endl;
    cout<<"Input the values of the array: ";
    for (int i = 0; i < size; i++){
        cin>>inputArr;
        arr[i] = inputArr;
    }
    cout<<"the maximum value in the array is: "<<returnMin(arr, size)<<endl;
    cout<<"the minimum value in the array is: "<<returnMax(arr, size);
}
