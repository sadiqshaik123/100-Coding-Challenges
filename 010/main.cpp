#include <iostream>

using namespace std;

int main()
{
    string str,dupli;
    cout<< "Enter String: ";
    cin >> str;
    dupli=str;
    int length=str.length();
    for(int i=0;i<length/2;i++){
        char temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    if(dupli==str){
        cout<<"Given string is a palindrome"<<endl;
    }
    else{
        cout<<"Given string is not a palindrome"<<endl;
    }

    return 0;
}
