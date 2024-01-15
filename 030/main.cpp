#include <iostream>
using namespace std;



int main() {
    int choice, value;
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top = -1;

    do {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                if (top >= MAX_SIZE - 1) {
                    cout << "Stack Overflow! Cannot push more elements." << endl;
                } else {
                    top++;
                    arr[top] = value;
                    cout << value << " pushed into the stack." << endl;

                }
                break;

            case 2:
                if (top < 0) {
                    cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
                } else {
                    int poppedValue = arr[top--];
                    cout << poppedValue << " popped from the stack." << endl;
                }
                break;

            case 3:
                if (top < 0) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack elements: ";
                    for (int i = 0; i <= top; ++i) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
