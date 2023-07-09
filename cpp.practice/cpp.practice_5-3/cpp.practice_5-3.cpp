// cpp.practice_5-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int search(int* arr, int size, int key);

int main()
{
    std::cout << "Hello!\n";

    int testArr[] = { 1,2,3,4,5,6,7,8,9 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    int key;

    std::cout << "Enter a value to search: ";
    std::cin >> key;
    for (int i{ 0 };i < 6;i++) {
        std::cout << "Index of value: " <<search(testArr, size, key ) <<'\n';
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


int search(int* arr, int size, int key) {
    int temp;

    for (int i{ 0 };i < size; i++) {
        if (arr[i] == key){
            if (i == 0) {
                return i;
            }
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            return i;
        }
    }
    return -1;
}
