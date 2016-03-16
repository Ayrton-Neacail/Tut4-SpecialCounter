#pragma once;
#define count_h;

#include <iostream>
#include <string.h> // includes libraries to be used in source file

class SpecialCounter{

private:
	int start;
	int stop;
	int step;
	int currentVal;


public:  
	SpecialCounter(int start = 0, int stop = 255, int step = 1, int currentVal); //default constructor
		  ~SpecialCounter(); //default destructor
		  int getCurrentVal(); //accesor fucntion

		  int StepInc(int step);
		  int StepDec(int step);
			  int start(int start);
			  int stop(int stop);


		  SpecialCounter operator++(int);//postfix functions
		  SpecialCounter  operator--(int);//postfix 
		  SpecialCounter  operator++();//prefix
		  SpecialCounter  operator--();//prefix











};




