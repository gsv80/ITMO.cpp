// cpp.practice_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <class T>
void sorting(T arr[], int size) {
    int j{ 0 };
    for (int i{ 0 };i < size;i++) {
        T x = arr[i];
        for (j = i - 1;j >= 0 && x < arr[j];j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = x;
    }
}

int main()
{
    std::cout << "*********sorting************\n";
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 }; 
    char arrc[] = "Hello, word";
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    sorting(arr, k1);
    for (int i = 0; i < k1; i++) std::cout << arr[i] << ";";
    std::cout << "\n*****************************" << std::endl;


    sorting(arrd, k2);
    std::cout << "\n*********sorting doubles************\n";
    for (int i = 0; i < k2; i++) std::cout << arrd[i] << ";";
    std::cout << "\n*****************************" << std::endl;

    sorting(arrc, k3);
    std::cout << "\n*********sorting string************\n";
    for (int i = 0; i < k3; i++) std::cout << arrc[i] << ";";
    std::cout << "\n*****************************" << std::endl;
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
