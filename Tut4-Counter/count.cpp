#include <count.h>
#include <iostream>


using namespace std;



SpecialCounter SpecialCounter::SpecialCounter(int start, int stop, int step, int current)


{
	start = start;
	stop=stop;
	if (current < start || current > stop)
		current = start;
	else
		current = start;
	step = step;
};


SpecialCounter SpecialCounter::~Counter(){

	//default destructor



}

SpecialCounter  SpecialCounter::getCurrent()
{
	return current; //accessor method
};

SpecialCounter SpecialCounter::operator++(int) //postfix
{
	SpecialCounter(start, stop, step, current);
	current = current + step;
	if (current > stop)
	{
		current = start;

	};
		
	return SpecialCounter();
};

SpecialCounter SpecialCounter::operator--(int) //postfix
{
	SpecialCounter(start, stop,step,current);
	current = current - step;
	if (current < start)
		current = stop;
	return SpecialCounter();
};

SpecialCounter  SpecialCounter::operator++()//prefix
{

	current = current + step;
	if (current > stop)
		current = start;
	return SpecialCounter();
};

SpecialCounter SpecialCounter::operator--()//prefix
{
	current = current - step;
	if (current < start){

		current = stop
	};


	return SpecialCounter();
};
