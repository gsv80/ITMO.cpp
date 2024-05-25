// cpp.practice_7.test-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <tuple>

using Tuple = std::tuple<std::string, int, double>;

void printTupleOfThree(Tuple t);

Tuple funtup(std::string s, int a, double d);

int main()
{
    std::vector<std::string> v1{"one", "two", "three", "four", "five", "six"};
    std::vector<int> v2{1, 2, 3, 4, 5, 6};
    std::vector<double> v3{1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

    auto t0 = make_tuple(v1[0], v2[0], v3[0]);
    auto t1 = funtup(v1[1], v2[1], v3[1]);


    printTupleOfThree(t0);
    printTupleOfThree(t1);

    return 0;

}

void printTupleOfThree(Tuple t) {
    std::cout << "("
        << std::get<0>(t) << ", "
        << std::get<1>(t) << ", "
        << std::get<2>(t) << ")" << std::endl;
}

Tuple funtup(std::string s, int a, double d) {
    s.append("!");
    return make_tuple(s, a, d * 10);

}