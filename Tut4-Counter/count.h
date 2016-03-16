#pragma once;


#include <iostream>
#include <string.h> // includes libraries to be used in source file

class SpecialCounter{

private: // variables to hold stop,start,increments
	int start;
	int stop;
	int step;
	int currentVal;
	int StepSizeInc = 3;
	int StepSizeDec = 2;


public:  
	SpecialCounter(int start = 0, int stop = 255, int step = 1, int currentVal); //default constructor
		  ~SpecialCounter(); //default destructor
		  int getCurrentVal(); //accesor function

		  int StepInc(int StepSizeInc);
		  int StepDec(int StepSizeDec);
		  int start(int start);
		  int stop(int stop);


		  SpecialCounter operator++(int);//postfix functions
		  SpecialCounter  operator--(int);//postfix 
		  SpecialCounter  operator++();//prefix
		  SpecialCounter  operator--();//prefix


};




