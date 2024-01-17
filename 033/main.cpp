#include <iostream>
using namespace std;



int main() {
    int choice, value;
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int front = -1, rear = -1;


    do {
        cout << "1. Enqueue  2. Dequeue  3. Display  4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if ((rear + 1) == front) {
                    cout << "Queue is full. Cannot enqueue." << endl;
                } else {
                    if (front == -1) {
                        front = 0;
                        rear = 0;
                    } else {
                        rear = rear + 1;
                    }

                    cout << "Enter the value to enqueue: ";
                    cin >> value;
                    arr[rear] = value;
                    cout << "Enqueued: " << value << endl;
                }
                break;

            case 2:
                if (front == -1) {
                    cout << "Queue is empty. Cannot dequeue." << endl;
                } else {
                    int dequeuedValue = arr[front];

                    if (front == rear) {
                        front = rear = -1;
                    } else {
                        front = front + 1;
                    }

                    cout << "Dequeued: " << dequeuedValue << endl;
                }
                break;

            case 3:
                if (front == -1) {
                    cout << "Queue is empty." << endl;
                } else {
                    cout << "Queue elements: ";
                    for(int i=front;i<=rear;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
