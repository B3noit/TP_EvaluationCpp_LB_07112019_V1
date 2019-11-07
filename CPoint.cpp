#include "CPoint.h"
#include <iostream>

//Accesseur/////////////
float CPoint::getX(){
	return this->f_X;
}

float CPoint::getY()
{
	return this->f_Y;
}


//Setteur//////////////////
void CPoint::setY(float f_Y)
{
	this->f_Y = f_Y;
}
void CPoint::setX(float f_X)
{
	this->f_X = f_X;
}

//Constructeur//////////
void CPoint::Cpoint()
{
	this->f_X = 0;
	this->f_Y = 0;
}

// deplace////////////////////////////
//
//BUT : Modifier les coordonnées d'un point pour le déplacer.
//
//PRINCIPE : On passe deux floats en arguments, que l'on ajoute au coordonnées du point.
//
//ENTREE : Un point, deux floats
//
//SORTIE : Un point avec de nouvelles coordonnées.
///////////////////////////////////////////////////
void CPoint::deplace(float f_X, float f_Y)
{
	this->f_X = this->f_X + f_X;
	this->f_Y = this->f_Y + f_Y;
}


// affiche////////////////////////////
//
//BUT : Afficher les coordonnées cartésiennes d'un point.
//
//PRINCIPE : On affiche les coordonnées en utlisant les accesseurs des coordonnées.
//
//ENTREE : Un point.
//
//SORTIE : Les coordonnées du point dans la console.
///////////////////////////////////////////////////
void CPoint::affiche()
{
	std::cout << "Notre point en X : " << this->getX() << std::endl;
	std::cout << "Notre point en Y : " << this->getY() << std::endl;
}