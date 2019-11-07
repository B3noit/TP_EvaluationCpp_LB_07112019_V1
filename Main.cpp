#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

//sing namespace std;

int main()
{
	CPoint ptMonPoint;//Déclaration de notre point

	///Test de l'homothetie

	ptMonPoint.setX(4);//On affecte l'abscisse du point à 4
	ptMonPoint.setY(1);//On affecte l'ordonnée du point à 

	std::cout << "Notre point a pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;

	std::cout << "On apllique une homothetie de 3.5." << std::endl;
	ptMonPoint.homothetie(3.5);
	std::cout << "Notre point a maintenant pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;
	std::cout << "On apllique une homothetie de 0.15." << std::endl;
	ptMonPoint.homothetie(0.15);
	std::cout << "Notre point a maintenant pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl << std::endl;


	///Test de la rotation

	ptMonPoint.setX(4);//On affecte l'abscisse du point à 4
	ptMonPoint.setY(1);//On affecte l'ordonnée du point à 1

	std::cout << "Notre point a pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;

	std::cout << "On apllique rotation une de 180." << std::endl;
	ptMonPoint.rotation(180);
	std::cout << "Notre point a maintenant pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;

	std::cout << "On reapllique une rotation de 180." << std::endl;
	ptMonPoint.rotation(180);
	std::cout << "Notre point a maintenant pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;

	std::cout << "On apllique rotation une de 180." << std::endl;
	ptMonPoint.rotation(63);
	std::cout << "Notre point a maintenant pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl << std::endl;

	///Test des coordonnées 
	ptMonPoint.setX(4);//On affecte l'abscisse du point à 4
	ptMonPoint.setY(1);//On affecte l'ordonnée du point à 1

	std::cout << "Notre point a pour coordonnées X : " << ptMonPoint.abscisse() << " et Y : " << ptMonPoint.ordonnee() << std::endl;
	std::cout << "Ses coordonnées poliares sont Rho : " << ptMonPoint.rho() << " Theta : " << ptMonPoint.theta();

	system("pause");

	return 0;
}