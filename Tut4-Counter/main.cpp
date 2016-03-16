#include <iostream>
#include <string> // included standard libraries that will be used for the main program
#include <count.h>
//main.cpp defines entry point for the appilcation
using namespace std;


int main(){ //beginning of main function

	{

		int t;
		cout << "1-Up Count\n2-Down Count\nEnter Option:";
		cin >> t;
		SpecialCounter c(20, 210, 0, 1);
		if (t == 1)
		{
			for (int i = 0; i < 20; i++)
			{
				c++;
				cout << c.getCurrent() << endl;
			}
		}
		else
		{
			for (int i = 0; i < 20; i++)
			{
				c--;
				cout << c.getCurrent() << endl;
			}

		}

	return 0;

}