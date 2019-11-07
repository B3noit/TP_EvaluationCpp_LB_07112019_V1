#include "CPoint.h"
#include <iostream>

//Accesseur/////////////
float CPoint::abscisse() {
	return this->f_X;
}
float CPoint::ordonnee()
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