#include <iostream>
using namespace std;
int main(){
    vector <int> arr = new int[5];
    cout<< "Enter elements of array";
    for (int i=0; i<5; i++){
        cin>> arr[i];
    }
    for(int i = 0; i<5;i++){
        cout << arr[i];
    }
}