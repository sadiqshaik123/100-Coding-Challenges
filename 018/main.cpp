#include <iostream>

using namespace std;

int main()
{
    long long n;
    cout << "Enter Binary number: ";
    cin >> n;
    int ans=0;
    int base=1;
    while(n>0){
        int rem=n%10;
        n/=10;
        ans=ans+rem*base;
        base=base*2;
    }
    cout<< "Decimal number is: "<<ans<<endl;
    return 0;
}
