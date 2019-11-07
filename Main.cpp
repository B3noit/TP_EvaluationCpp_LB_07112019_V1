#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

//sing namespace std;

int main()
{
	CPoint ptMonPoint;

	ptMonPoint.setX(4);
	ptMonPoint.setY(1);
	ptMonPoint.affiche();
	std::cout << "On cdéplace ce point  de 3 en X et de 5 en Y. " << std::endl;
	ptMonPoint.deplace(3, 5);
	ptMonPoint.affiche();


	system("pause");

	return 0;
}