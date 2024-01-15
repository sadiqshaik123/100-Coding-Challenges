#include <iostream>

using namespace std;
int main()
{
    int a,b,ans;
    char op;
    cout<<"Enter 2 numbers with operator(a (op) b): "<<endl;
    cin>>a >>op>>b;
    switch(op){
        case '+':
            ans = a+b;
            break;
        case '-':
            ans = a-b;
            break;
        case '*':
            ans = a*b;
            break;
        case '/':
            ans = a/b;
            break;
        default:
            cout<<"Wrong operator"<<endl;
            break;
    }
    cout<< a <<" "<<op<<" "<< b<<" = " <<ans<<endl;
    return 0;
}
