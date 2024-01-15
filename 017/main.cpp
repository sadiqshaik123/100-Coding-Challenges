#include <iostream>

using namespace std;

int main()
{
    int l1,l2;
    cout<<"Enter length of array-1: ";
    cin>>l1;
    int arr1[l1];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<l1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter length of array-2: ";
    cin>>l2;
    int arr2[l2];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<l2;i++){
        cin>>arr2[i];
    }
    int res[1];
    int k=0;
    for(int i=0;i<l1;i++){
        for(int j=0;j<l2;j++){
            if(arr1[i]==arr2[j]){
                res[k]=arr1[i];
                k++;
            }
        }

    }
    cout<<"Result array: ";
    for(int i=0;i<k;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
