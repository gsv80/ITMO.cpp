// cpp.practice_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>


bool isPrime(int);

int* primeNumbers(int);


int main() {

    // ---------------------- exersize 1-2 ---------------------------------
 
    /*char op;
    std::cout << "Input option: " << std::endl;
    std::cin >> op;

    switch (op) {
    case 'V':
        std::cout << "I want condition system\n";
    case 'S':
        std::cout << "There should be famous brand acoustic system\n";
    default:
        std::cout << "Wheels with 18' radius\n";
        std::cout << "Equipped with powerfull engine\n";
    }*/



    // =================== END of exersize 1-2===============================

    // -------------------- Test exersize 2-1 ------------------------------

    // "A prime number is a whole number greater than 1 whose only factors are 1 and itself. A factor is a whole number that can be divided evenly into another number."

    int test_number;
    
   // bool result{false};
    std::cout << "Input a whole number to test if it is prime" << std::endl;
    std::cin >> test_number;
    
    //std::cout << result << std::endl;

    // ----------- test for isPrime function ------------

    //isPrime(test_number)  ? std::cout << "is Prime - true\n" : std::cout << "is Prime - false\n";

    primeNumbers(test_number);
    

    return 0;
}

bool isPrime(int test_num) {
    if (test_num < 1){
        return false;
    }
    for (int i = 2; i < test_num; i++) {
        if (test_num % i == 0) {
            return false;
        }
    }
    return true;
}

int *primeNumbers(int arrSize) {
    int j{ 2 };
    int *primeNums = new int[arrSize+1];
    for (int i=3; i < arrSize+1; i++) {
        if (isPrime(i)) {
            primeNums[j] = i;
            if (isPrime(j)) {
                std::cout<< primeNums[j]<< " is super prime, index "<<j<<"\n";
            }
            else {
                std::cout << primeNums[j] << " is prime\n";
            }
            j++;
            
            
        }
    }
    return primeNums;
};





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
