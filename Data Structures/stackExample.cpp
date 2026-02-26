// stackExample.cpp : Stack is LIFO: Last in, first out. 
//

#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> numbers) {
    while (!numbers.empty()) {
        cout << numbers.top() << endl;
        numbers.pop();
    }
}

int main()
{
    //initialize an empty stack: 
    stack<int> numbers;

    //.3 push() is used to add elements to the stack.
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);

    //1. empty() function checks if the stack is empty
    if (numbers.empty()) {
        cout << "Stack is empty\n";
    }
    else {
        cout << "Stack is not emtpy\n";
    }

    //2. size() function to check the size of the stack
    cout << "Stack size is: " << numbers.size()<<endl;

    //4. pop() function removes item form the stack
    numbers.pop();
    cout << "Stack size is: " << numbers.size() << endl;

    //5. top() function returns the top element in the stack
    printStack(numbers);
}
