#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int len,key;
    cout<<"Enter the length of the array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter elements " <<endl;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    sort(arr,arr+len);
    cout<<"Sorted array " <<endl;
    for(int i=0;i<len;i++){
        cout<<arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>key;
    int s=0;
    int l=len;
    while(s<=l){
        int mid = (s+(l-1))/2;
        if(arr[mid]==key){
            cout<<"Element found at "<<mid<<endl;
            break;
        }
        if(arr[mid]<key){
            l=mid+1;
        }
        if(arr[mid]>key){
            s=mid-1;
        }
    }
    return 0;
}
