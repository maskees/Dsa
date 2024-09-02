#include <iostream>
using namespace std;

const int n = 5;
int q[n];

void dequeue(int& front, int& rear) {
    if (front == -1) {
        cout << "Queue underflow" << endl;
        return;
    }

    if (front == rear) {
        front = rear = -1;  // Queue is now empty
    } else {
        front = (front + 1) % n;  // Circular increment
    }
}

void printing(int front, int rear) {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }

    int i = front;
    while (true) {
        cout << q[i] << " ";
        if (i == rear) break;
        i = (i + 1) % n;
    }
    cout << endl;
}

void enqueue(int& front, int& rear) {
    int dig;
    cout << "Enter the element you want to insert: ";
    cin >> dig;

    if ((rear + 1) % n == front) {
        cout << "Queue overflow" << endl;
        return;
    }

    if (front == -1) {  // Queue is empty
        front = rear = 0;
    } else {
        rear = (rear + 1) % n;  // Circular increment
    }
    q[rear] = dig;
}

int main() {
    int front = -1, rear = -1;
    int a;

    do {
        cout << "Enter the process you want to do\n \t1 for enqueue \t2 for dequeue\t3 to exit: ";
        cin >> a;

        switch (a) {
            case 1:
                enqueue(front, rear);
                printing(front, rear);
                break;
            case 2:
                dequeue(front, rear);
                printing(front, rear);
                break;
            case 3:
                break;
            default:
                cout << "Enter a valid number" << endl;
                break;
        }
    } while (a != 3);

    return 0;
}
