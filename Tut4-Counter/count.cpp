#include <count.h>

using namespace std;



SpecialCounter::SpecialCounter(int start, int stop, int step, int current)


{
	start = start;
	stop=stop;
	if (current < start || current > stop)
		current = start;
	else
		current = start;
	step = step;
};


SpecialCounter::~Counter(){





}

int Counter::getCurrent()
{
	return current;
};

Counter Counter::operator++(int)//postfix
{
	Counter t(start, finish, current, step);
	current = current + step;
	if (current > finish)
		current = start;
	return t;
};

Counter Counter::operator--(int)//postfix
{
	Counter t(start, finish, current, step);
	current = current - step;
	if (current < start)
		current = finish;
	return t;
};

Counter Counter::operator++()//prefix
{
	current = current + step;
	if (current > finish)
		current = start;
	return Counter(start, finish, current, step);
};

Counter Counter::operator--()//prefix
{
	current = current - step;
	if (current < start)
		current = finish;
	return Counter(start, finish, current, step);
};
