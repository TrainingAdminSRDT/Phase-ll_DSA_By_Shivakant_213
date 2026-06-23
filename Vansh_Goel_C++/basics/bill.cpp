#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "enter the amount of the three items(pencil pen eraser)\n";
    cin >> a >> b >> c;
    float total = 0.0;
    float gst =0.0;
    gst=0.18;
    total = a+b+c+((a * gst) + (b * gst) + (c * gst));
    cout << "total cost " << total;
    return 0;
}