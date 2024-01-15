#include <iostream>

using namespace std;

int main()
{
    string str;
    bool alldigit=true;
    cout<<"Enter string: ";
    cin>> str;
    for(int i=0;i<str.length();i++){
        char c= str[i];
        if(!isdigit(c)){
            alldigit=false;
            break;
        }
    }
    if(alldigit){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}
