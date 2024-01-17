#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter String1: ";
    cin>>str1;
    cout<<"Enter String2: ";
    cin>>str2;
    string res="";
    for(char ch : str1){
        for(char ch1 : str2){
            if(ch==ch1){
                res=res+ch1;
            }
        }
    }
    int i,j;
    string ans="";
    for(i=0;i<res.length();i++){ //0 //1 //2
        for(j=0;j<i;j++){        //0 //0  //0,1
            if(res[i]==res[j]){   //0==0 l==l  1==0=
                break;
            }
        }
        if(j==i){     //0==0
            ans=ans+res[i];  //l
        }
    }
    cout<<ans;
    return 0;
}
