#pragma once
#include <iostream>
#include <string>
class Time
{
public:
	Time();
	Time(int hours, int minutes, int seconds);
	void check();
	void print();
	Time addTime(const Time& time2) const;
	class TimeWrongValue
	{
	public:
		TimeWrongValue() : message("Wrong value of time") {}
		void printMessage() const { std::cout << message << std::endl; }
	private:
		std::string message;
	};
private:
	int hours;
	int minutes;
	int seconds;
};


