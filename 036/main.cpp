#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int len;
    cout<<"Enter length of Array: ";
    cin>>len;
    int arr[len];
    cout<<"Enter elements: ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    int ans = 0, count = 0;
    sort(arr, arr + len);

    for (int i = 0; i < len; i++) {
        if (i > 0 && arr[i] == arr[i - 1] + 1) {
            count++;
        }
        else if(i<=0){
            count = 1;

        }
        ans=count;
    }
    cout << "Length of the Longest contiguous subsequence is " << ans;

    return 0;
}
