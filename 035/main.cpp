#include <iostream>

using namespace std;

int main()
{
    int len,n;
    cout<<"Enter the length of the array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter the Elements: ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"Enter steps: ";
    cin>>n;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[len-n+i];
    }
    for(int i=len-1;i>=n;i--){
        arr[i]=arr[i-n];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    cout<<"Result array: ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}
