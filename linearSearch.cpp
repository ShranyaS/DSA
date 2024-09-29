#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int num){
    int total=0;
    int index[10];
    for (int i = 0; i < size; i++){
        if (arr[i] == num){
            total++;
            return i;
        }
    }
}
void printArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}
bool search(int arr[], int size, int num){
    for(int i = 0; i <size; i++){
        if(arr[i] == num){
            return 1;
        }
    }
}
int main(){
    int arr[7] = {1, 45, 24, 256, 56, 45, 87} ;
    int inputNum;
    printArray(arr, 7);
    cout<<"Input the number you wanna search: ";
    cin>>inputNum;
    bool found = search(arr, 7, inputNum);
    if (found){
        cout<<"the number is present";
    }
    else{
        cout<<"the number is not there";
        }
        
    
}