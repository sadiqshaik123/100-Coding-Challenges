#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int len;
    cout<<"Enter Length of the array: ";
    cin>>len;
    int arr[len];
    cout << "Enter " << len << " elements of the array:" << endl;
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + len);
    cout<< arr[len-2];

    return 0;
}
