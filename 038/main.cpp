#include <iostream>

using namespace std;

int main()
{
    int arr[2][2],arr1[2][2];
    cout<<"Enter elements for matrix-1"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter elements for matrix-2"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr1[i][j];
        }
    }
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=0;
            for(int k=0;k<2;k++){
                res[i][j]+=arr[i][k]*arr1[k][j];
            }
        }
    }
    cout<<"Product of matrix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
