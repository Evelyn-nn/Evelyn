// E5.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;;
int main()
{
	int a = 0; double b = 0.0;int  year = 0;
	while (b<=a )
	{
		++year;
		a = a + 11;
		b = b + (b+100)* 0.05;
	}
	cout << year << " years later ,Cleo's money is more than Daphne's money ." << endl;
	cout << "此时，Cleo的投资价值为 " << a << "，Daphne的投资价值为 " << b << endl;
    return 0;
}

