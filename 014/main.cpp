#include <iostream>

using namespace std;

int main()
{
    int l;
    cout<<"Enter length of the array: ";
    cin>> l;
    int arr[l];
    cout<<"Enter elements in the array: "<<\endl;
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    int maxele=arr[0];
    for(int i=0;i<l;i++){
        if(arr[i]>maxele){
            maxele=arr[i];
        }
    }
    cout<<"Largest element in an array is "<<maxele<<endl;
    return 0;
}
