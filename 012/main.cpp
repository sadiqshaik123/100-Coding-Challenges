#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sum,avg;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"Avg of "<<a<<" , "<<b<<" , "<<c<<" is " <<avg<<endl;
    return 0;
}
