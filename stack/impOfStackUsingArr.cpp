#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int top;
    int size;

    // constructor
    Stack(int size) {
        arr = new int[size];
        top = -1;
        this->size = size;
    }

    // function
    void push(int data) {
        if (top < size - 1) {  // Corrected condition
            // space available
            top++;
            arr[top] = data;
        }
        else {
            cout << "stack overflow" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "stack underflow:" << endl;
        }
        else {
            top--;
        }
    }

    int getTop() {
        if (top == -1) {
            cout << "there is no element in the stack" << endl;
            return -1; // Returning a default value when there's no element
        }
        else {
            return arr[top];
        }
    }

    int getSize() {
        return top + 1;
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.isEmpty()) {
        cout << s.getTop() << " ";
        s.pop(); // Add pop() here to remove the top element
    }
    cout << endl;

    return 0;
}
