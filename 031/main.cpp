#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool ans=false;
    if(n<0){
        ans=false;
    }
    for(int i=0;i*i<=n;i++){
        if(i*i==n){
            ans=true;
        }
    }
    if(ans){
        cout<<"perfect square"<<endl;
    }
    else{
        cout<<"Not  perfect square"<<endl;
    }
    return 0;
}
