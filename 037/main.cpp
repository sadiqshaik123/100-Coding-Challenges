#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;
    string newstr="";
    for(char ch: str){
        if(isalnum(ch)){
            newstr+=tolower(ch);
        }
    }
    bool ispal=true;
    int len=newstr.length();
    for(int i=0;i<len/2;i++){
        if(newstr[i]!=newstr[len-i-1]){
            ispal=false;
            break;
        }
    }
    if(ispal){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}
