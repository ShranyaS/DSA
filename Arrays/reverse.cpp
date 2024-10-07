#include <iostream>
using namespace std;
void reverse(int arr[], int size){
    int temp=0;
    for (int i = 0; i<=size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp; 
        }
}
void reverse2(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5] = {45, 34, 26, 67, 78};
    printArray(arr, 5);
    cout<<endl;
    reverse(arr,5);
    printArray(arr, 5);
    cout<<endl;
    reverse2(arr, 5);
    printArray(arr, 5);

}