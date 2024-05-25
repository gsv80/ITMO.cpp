// cpp.practice_5-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int* max_vect(int kc,int arr[], int arr2[]);

int main()
{
    std::cout << "Hello!\n";

    int arrA[] = { 1,2,3,4,5,6,7,2 };
    int arrB[] = { 7,6,5,4,3,2,1,3 };

    int kc = sizeof(arrA) / sizeof(arrA[0]);
    int *c;
    c = max_vect(kc, arrA, arrB);

    for (int i = 0; i < kc; i++) {
        std::cout << c[i] << '\t';

    }

    std::cout << std::endl;
    delete []c;

}

int* max_vect(const int kc, int arr[], int arr2[]) {

    int *result = new int[kc];

    for (int i{ 0 }; i < kc; i++) {
        if (arr[i] > arr2[i]) {
            result[i] = arr[i];
        } else{
            result[i] = arr2[i];
        }
    }

    
    return result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


