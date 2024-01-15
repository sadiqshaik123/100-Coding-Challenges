#include <iostream>

using namespace std;

int main()
{
    int n,p,ans=1;
    cout<< "Enter number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>p;
    for(int i=0;i<p;i++){
        ans=ans*n;
    }
    cout<<n<<"^"<<p<<" is "<<ans<<endl;
    return 0;
}
