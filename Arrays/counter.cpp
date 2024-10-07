#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void counter(vector<int>& arr){
    sort(arr.begin(), arr.end());
    int count = 1;
    for (int i=1; i<arr.size(); i++){

        if (arr[i] == arr[i-1]){
            count++;
        }
        else{
            cout<<"the element "<<arr[i-1]<<" has occured "<<count<<" times."<<endl;
            count = 1;
        }
        
    }
    cout<<"the element "<<arr[arr.size()-1]<<" has occured "<<count<<" times."<<endl;
}
bool isUnique(vector<int>& arr){

    vector<int> occur;
    sort(arr.begin(), arr.end());
    int count = 1;
    for (int i=1; i<arr.size(); i++){

        if (arr[i] == arr[i-1]){
            count++;
        }
        else{
            occur.push_back(count);
            count = 1;
        }
        
    }
    sort(occur.begin(), occur.end());
    for (int i=1; i<occur.size(); i++){

        if (occur[i] == occur[i-1]){
            return 0;
        }
        
    }
    /*for (int j= 0; j<occur.size(); j++){
        for (int k = j+1; k<occur.size(); k++){
            if (arr[k] == arr[j]){
                return 0;
            }
            else{return 1;}
        }
    }*/

}
int main(){
    vector<int> arr = {1, 2, 4, 1, 4, 1};
    //counter(arr);
    return 0;
    bool unique = isUnique(arr);
    if (unique == 0){
        cout<<"The array doesn't have unique elements";
    }else{
        cout<<"The array has unique elements";
        }
    return 0;

}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countOccurrences(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    int count = 1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            cout << arr[i - 1] << " occurred " << count << " times" << endl;
            count = 1;
        }
    }

    // Handle the last element
    cout << arr[arr.size() - 1] << " occurred " << count << " times" << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 1, 2};

    countOccurrences(arr);

    return 0;
}*/