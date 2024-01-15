#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter a number A: ";
    cin >> a;
    cout << "Enter a number B: ";
    cin >> b;
    if(a>b){
        cout << a << " is Maximum" << endl;
    }
    else{
        cout << b << " is Maximum" << endl;
    }
    return 0;
}
