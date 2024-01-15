#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;
    int length = str.length();
    for(int i=0;i<length/2;i++){
        char temp =str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    cout << str;
    return 0;
}
