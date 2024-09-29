#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8 };
    printArray(arr, 8);
    cout<<endl;
    swapAlternate(arr, 8);
    printArray(arr, 8);
}