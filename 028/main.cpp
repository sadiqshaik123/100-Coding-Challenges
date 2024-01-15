#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter EmailID: ";
    cin>>str;
    bool at=false;
    bool dot=false;
    for(int i=0;i<str.length();i++){
            if(str[i]=='@'){
                at=true;
            }

    }
    for(int i=0;i<str.length();i++){
            if(str[i]=='.'){
                dot=true;
            }

    }
    if(at==true && dot==true){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Not Valid"<<endl;
    }
}
