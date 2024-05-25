// cpp.practice_8-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Time
{
public:
	Time(): hours(0), minutes(0), seconds(0) {
		

		//std::cout << "const is instaciated\n";
	}

	Time(int x, int y, int z) {
		
		seconds = z + 60 * y + 3600 * x;
		minutes = 0;
		hours = 0;
		while (seconds >= 60) {
			seconds -= 60;
			minutes++;
		}
		while (minutes >= 60) {
			minutes -= 60;
			hours++;
		}
	}

	//Time(int hours, int minutes, int seconds) :hours(hours), minutes(minutes), seconds(seconds) {}
	
	void printTime() {
		std::cout << "Time: " << 
			hours << ":" << 
			minutes << ":" << 
			seconds <<  '\n';
		

	}

	Time sumTime(const Time t1, const Time t2) {
		int sec, min, hours;
		sec = t1.seconds + t2.seconds;
		min = t1.minutes + t2.minutes;
		hours = t1.hours + t2.hours;
		Time t(hours, min,sec);
		t.printTime();
		return t;

	}
	


	~Time();

private:
	int hours;
	int minutes;
	int seconds;


};



Time::~Time()
{
}
		



int main()
{
	Time t1(1, 60, 60);
	Time t2(1, 60, 60);

	t1.printTime();
	t2.printTime();
	Time t3;
	
	t3.sumTime(t1, t2);
	t3.printTime();
	

    
}


