// cpp,test-solution-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



class Stack {
private:
    static const int ARRAY_LENGTH = 10;
public:
    Stack()
    {}
    void reset() {
        length = 0;
        for (auto& item : arr) {
            item = 0;
        }
    }
    bool push(int value) {
        if (length < ARRAY_LENGTH) {
            arr[length] = value;
            length++;
            return true;
        }
        else {
            return false;
        }
    }
    int pop() {
        int temp;
        if (length >= 0) {
            length--;
            temp = arr[length];
            arr[length] = 0;
        }
        else {
            temp = -999;
            std::cout << "В стеке больше нет элементов" << std::endl;
        }
        return temp;
    }
    void print() {
        std::cout << "( ";
        for (auto& item : arr) {
            if (item != 0) {
                std::cout << item << " ";
            }
        }
        std::cout << ")" << std::endl;
    }
    int length;
    int arr[ARRAY_LENGTH];
};

int main() {
    
    Stack stack;
    stack.reset();
    stack.print();
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.pop();
    stack.print();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
