#include <iostream>

using namespace std;

int main()
{
    string str;
    int sum=0;
    cout<< "Enter String: ";
    cin>> str;
    int length = str.length();
    for(int i=0;i<length;i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'||str[i]=='O'|| str[i]=='U'){
            sum++;
        }
    }
    if(sum==0){
        cout<<"No Vowels Found"<<endl;
    }
    else{
        cout<<"No of vowels: "<<sum<<endl;
    }
    return 0;
}
