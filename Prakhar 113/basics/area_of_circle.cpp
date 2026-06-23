#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "enter the radius of circle\n";
    cin >> r;
    float area = 0.0;
    area = 3.14 * r * r;
    cout << "area of the circle: " << area << endl;
    return 0;
}