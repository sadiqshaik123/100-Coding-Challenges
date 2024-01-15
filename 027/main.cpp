#include <iostream>
#define pi 3.1415

using namespace std;

int main()
{
    int r;
    float area;
    cout << "Enter the radius of Circle: ";
    cin >> r;
    area = pi*r*r;
    cout<<"Area of Circle: " <<area<<endl;
    return 0;
}
