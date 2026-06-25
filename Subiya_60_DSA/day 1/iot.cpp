#include <iostream>
using namespace std;
int main(){
    int x,y;
    int* ptr;            // pointer
    cout<<"Enter value of x and y ";
    cin >> x >> y;
    // cout << x << y << endl;
    
    // x = x+y;
    // y = x-y;
    // x = x-y;
    cout << x << endl;
    cout << y << endl;
    
    // ptr =  &x ;
    // cout << ptr;
     
    if(x%2==0)
       cout << "Even";
    if(x%2!=0)
        cout<< "Odd";
    return 0;
}

//Microsoft dynamic
/*struct Node(){                arrow operator
          node-> data
}*/