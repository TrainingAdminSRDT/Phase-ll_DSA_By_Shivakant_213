#include<iostream>
using namespace std;
int main()
{
    float P,R,T;
    cout<<"enter the principle amount, rate of interest and time\n";
    cin>>P>>R>>T;
    float SI=0.0;
    SI=P*R*T/100;
    cout<<"Simple interest:"<<SI;
    return 0;
}