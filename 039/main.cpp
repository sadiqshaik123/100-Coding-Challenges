#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int len;
    cout<<"Enter the length of the array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    sort(arr,arr+len);
    for(int i=0;i<len;i++){
        if(arr[i]!=arr[i-1]+1)
        {
            for (int k = arr[i - 1] + 1; k < arr[i]; k++)
            {
                cout << k << endl;
            }
        }
    }
    return 0;
}
