// cpp.practice_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>


bool isPrime(int);

int* primeNumbers(int);
//int moneyChange(int);






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

    // -------------------- Test exersize 2-1 PRIMARY nums------------------------------

    // "A prime number is a whole number greater than 1 whose only factors are 1 and itself. A factor is a whole number that can be divided evenly into another number."

    int test_number;
    
   // bool result{false};
   // 
    // --------------- input number to check if it prime - Task 2.1

    //std::cout << "Input a whole number to test if it is prime" << std::endl;
    //std::cin >> test_number;
    
    //std::cout << result << std::endl;

    // ----------- test for isPrime function ------------

    //isPrime(test_number)  ? std::cout << "is Prime - true\n" : std::cout << "is Prime - false\n";

    //primeNumbers(test_number);
    

    // -------------------- Test exersize 2.2 SNILS ------------------------------

    /*
    
    
    std::string snils_num{};
    std::cout << "Enter a SNILS number to check it for validity\n";
    std::cin >> snils_num;
    
    int sum{};
    int chkSum{};
    int j{ 9 };

    // ****** let's create the checkSum according to rules:
    for (int i{};i < 9;i++) {
       sum = sum + stoi(snils_num.substr(i,1))*j;
       j--;

    }
    
    std::cout << "Snils numbers sum*position = "<< sum <<'\n';

    
    if (sum < 100) {
        sum = sum;
    }
    else if(sum == 101 || sum == 100){
        sum = 0;
    }
    else {
        if (sum % 101 < 100) {
            sum = sum % 101;
        }
        else sum = 0;
    }
    std::cout << "Valid Sum in snils should be = " << sum << '\n';
    
    
    chkSum = stoi(snils_num.substr(9, 2));
   
    std::cout<<"Entered number is " << (sum == chkSum ? "Valid" : "Not Valid") << '\n';
    */


    // ============================= end task 2.2 ==========================


    // ******************* Test exersize 2.3 Razmen Monet ******************* 
     
    std::vector <int> n = { 1, 2, 5, 10, 50};
    int sums, cnum = 0;

    std::cout << "Enter sum to change" << '\n';
    std::cin >> sums;
    for (int i = 4; i >= 0; i--) {

        if (sums <= 0) { break; };
        std::cout <<"coin nominal: " << n[i] << '\t';
        
        if (sums >= n[i]) {
            cnum = sums / n[i];
            sums %= n[i];
            std::cout << ", coins number: " << cnum << '\n';
            
        }
        else { 
            std::cout << " are not used " << '\n';
            continue; 
        }
        
    }
  
     
    // **************************** End task 2.3 ****************************

    // ***************** Task 2.4 Aim Shooting ******************

    std::cout << "******* task 2.4 *********" << '\n';
    
    int throws;
    double x, y;
    double sum = 0;
    double radius;
    int result;

    std::cout << "Enter number of throws" << '\n';
    std::cin >> throws;

    for (int i = 0;i < throws;i++) {
        std::cout << "\nEnter the throw coordinates: \n";
        std::cout << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
        radius = pow(pow(x,2)+pow(y,2), 0.5);

        if (radius > 3) {
            result = 0;
        }
        else if (radius > 2) {
            result = 1;
        }
        else if (radius > 1) {
            result = 5;
        }
        else {
            result = 10;
        }
        sum += result;
    }
    std::cout << "Result of throws: " << sum << '\n';
    (sum/throws>8) ? std::cout << "Your skill is Excelent" : ((sum/throws>5)? std::cout << " Skill is middle level, more practice": std::cout<<"You are green, practice and practice");
    
    // ******************* updated task 2.4 *********

    int uthrows=0;
    double ux, uy;
    double usum = 0;
    double uradius;
    int uresult;

    while (usum < 30) {
        std::cout << "\nEnter the throw coordinates: \n";
        std::cout << "x: ";
        std::cin >> ux;
        std::cout << "y: ";
        std::cin >> uy;
        uradius = pow(pow(ux, 2) + pow(uy, 2), 0.5);
        uthrows += 1;
        if (uradius > 3) {
            uresult = 0;
        }
        else if (uradius > 2) {
            uresult = 1;
        }
        else if (uradius > 1) {
            uresult = 5;
        }
        else {
            uresult = 10;
        }
        usum += uresult;

    }

    std::cout << "Throws nums: "<< uthrows<<'\n';

    std::cout << "Your level: ";
    (usum / uthrows > 8) ? std::cout << "Your skill is Excelent" : ((usum / uthrows > 5) ? std::cout << " Skill is middle level, more practice" : std::cout << "You are green, practice and practice");


    // ************************** End Task 2.4 ******************
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
