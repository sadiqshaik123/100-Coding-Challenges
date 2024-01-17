#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter Range: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        bool isprime=true;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            sum=sum+i;
        }

    }
    cout<<sum;
    return 0;
}
