// Stack using Array
// Author: Chirag
// Time Complexity: O(1)
// Space Complexity: O(n)

#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100];

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};
int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << endl;

    st.pop();

    cout << "Top after pop: " << st.peek() << endl;

    cout << "Is stack empty? " << st.isEmpty() << endl;

    return 0;
}
