// cpp.practice_7-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



struct times {
    int hours;
    int minutes;
    int seconds;
    void showTime() {
        std::cout << '\n' << hours << " hours, " << minutes << " minutes "<< seconds << " seconds\n";
    }

    times() = default;

    times(int hours, int minutes, int seconds)
        : hours(hours), minutes(minutes), seconds(seconds)
    {
    }

    bool operator==(const times& other) const
    {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }
};

times addTime(const times &t1, const times &t2) {
    times t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    t.seconds = t1.seconds + t2.seconds;
    if (t.seconds >= 60) {
        t.seconds -= 60;
        t.minutes++;
    }
    if (t.minutes >= 60) {
        t.minutes -= 60;
        t.hours++;
    }
    return t;
}

times substTime(const times& t1, const times& t2) {
    times t;
    int temp1 = t1.seconds + t1.minutes * 60 + t1.hours * 3600;
    int temp2 = t2.seconds + t2.minutes * 60 + t2.hours * 3600;
    try {
        t.seconds = temp1 - temp2;
        if ((temp2 - temp1) > 0) {
            throw 1;
        }
    }
    catch (...) {
        
        std::cout << "Result of substraction is absolute difference between two values\n";
        t.seconds = temp2 - temp1;
    }
    
    t.hours = 0;
    t.minutes = 0;
    
    while (t.seconds >= 60) {
        t.seconds -= 60;
        t.minutes++;
    }
    while (t.minutes >= 60) {
        t.minutes -= 60;
        t.hours++;
    }
    return t;
}
times inputTime() {
    times t;
    std::cout << "\nEnter hours value: ";
    std::cin >> t.hours;
    std::cout << "\nEnter minutes value: ";
    std::cin >> t.minutes;
    std::cout << "\nEnter seconds value: ";
    std::cin >> t.seconds;
    while (t.seconds >= 60) {
        t.seconds -= 60;
        t.minutes++;
    }
    while (t.minutes >= 60) {
        t.minutes -= 60;
        t.hours++;
    }

    return t;

}



int main()
{

    times t1 = inputTime();
    times t2{ 1 , 11, 30 };
    times t3 = addTime(t1, t2);
    times t4 = substTime(t1, t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    t4.showTime();
        
}



