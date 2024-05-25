// cpp.practice_7-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



struct distance {
    int feet;
    double inches;
    void showDist() {
        std::cout << '\n' << feet << " feet, " << inches << " inches\n";
    }


    distance() = default;

    distance(int feet, double inches)
        : feet(feet), inches(inches)
    {
    }

    bool operator==(const distance& other) const
    {
        return feet == other.feet && inches == other.inches;
    }
};

distance addDistance(const distance& d1, const distance& d2) {
    distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches > 12) {
        d.inches -= 12;
        d.feet++;
    }
    return d;
}

distance inputDist() {
    distance d;
    std::cout << "\nEnter feet value: ";
    std::cin >> d.feet;
    std::cout << "\nEnter inches value: ";
    std::cin >> d.inches;
    while (d.inches > 12) {
        d.inches -= 12;
        d.feet++;
    }
    return d;

}



int main()
{

    distance d1 = inputDist();
    distance d2{ 1 , 11 };
    distance d3 = addDistance(d1, d2);
    d1.showDist();
    d2.showDist();
    d3.showDist();



}



