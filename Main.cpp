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
	std::cout << "Notre point a pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;
	std::cout << "On deplace ce point  de 3 en X et de 5 en Y. " << std::endl;
	ptMonPoint.deplace(3, 5);
	std::cout << "Notre point a maintenant pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;


	system("pause");

	return 0;
}