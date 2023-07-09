// cpp.practice_4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void showArr(const int arr[], const int size);
bool ascending(const int a, const int b);
bool descending(const int a, const int b);
void bubble_sort(int arr[], const int size, bool (*compare)(int a, int b));
void swap(int*, int*);
void swap(int&, int&);

int main()
{
    std::cout << "Hello!\n";

    const int arrSize=9;
    bool isAsc{ 1 };

    int arr[arrSize] = { 9,8,7,1,2,5,9,3,4 };

    std::cout << "press 0 - to choose descending sorting\n ";
    std::cout << "press 1 - to choose ascending sorting\n ";
    std::cin >> isAsc;

    std::cout << "Primary data: \n";

    showArr(arr, arrSize);

    switch (isAsc) {
    case 1: bubble_sort(arr, arrSize, ascending);
        break;
    case 0: bubble_sort(arr, arrSize, descending);
       
    default: std::cout << "\r Unknown exception";
        break;
    }



    std::cout << "-----------------------------\n";
    showArr(arr, arrSize);

    std::cout << "-----------------------------\n";
    
    return 0;


}


void showArr(const int arr[], const int size) {

    for (int i{ 0 };i < size; i++) {
        std::cout << arr[i] << '\t';
    };
    std::cout << '\n';
}


bool ascending(const int a, const int b) {
    return a > b;
}

bool descending(const int a, const int b) {
    return a < b;
}


void bubble_sort(int arr[], const int size, bool (*compare)(int a, int b)) {
    for (int i = 1; i < size; i++) {
        for (int j = 0;j < size - 1;j++) {
            if ((*compare)(arr[j], arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
