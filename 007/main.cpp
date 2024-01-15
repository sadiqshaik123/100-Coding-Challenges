#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if(year%4==0){
        cout << year <<" is a Leap year"<< endl;
    }
    else{
        cout << year <<" is not a Leap year"<< endl;

    }
    return 0;
}
