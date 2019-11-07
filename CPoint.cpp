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
//BUT : Modifier les coordonn�es d'un point pour le d�placer.
//
//PRINCIPE : On passe deux floats en arguments, que l'on ajoute au coordonn�es du point.
//
//ENTREE : Un point, deux floats
//
//SORTIE : Un point avec de nouvelles coordonn�es.
///////////////////////////////////////////////////
void CPoint::deplace(float f_X, float f_Y)
{
	this->f_X = this->f_X + f_X;
	this->f_Y = this->f_Y + f_Y;
}


// homothetie/////////////////////////////////////////////////////////
//
//BUT : Modifier les coordonn�es d'un point pour effectuer transformation g�om�trique correspondant � un agrandissement ou � une r�duction.
//
//PRINCIPE : On passe un float en argument, on multiplie les coordonn�es du point par ce float.
//
//ENTREE : Un point, un float
//
//SORTIE : Un point avec de nouvelles coordonn�es.
///////////////////////////////////////////////////
void CPoint::homothetie(float f_K)
{
	this->f_X = this->f_X * f_K;
	this->f_Y = this->f_Y * f_K;
}


// rotation /////////////////////////////////////////////////////////
//
//BUT : Modifier les coordonn�es d'un point pour effectuer transformation g�om�trique correspondant � une rotation autour de l'origne.
//
//PRINCIPE : On passe un float en argument, on applique la formule.
//
//ENTREE : Un point, un float
//
//SORTIE : Un point avec de nouvelles coordonn�es.
///////////////////////////////////////////////////
void CPoint::rotation(float f_R)
{
	float f_x = 0;
	float f_y = 0;

	f_R = f_R * M_PI / 180;
	f_x = this->f_X * cos(f_R) + this->f_Y * sin(f_R);
	f_y = -this->f_X * sin(f_R) + this->f_Y * cos(f_R);
	this->f_X = round(f_x);
	this->f_Y = round(f_y);
}

// rho ///////////////////////////////////////////////////////////////////////////////////////
//
//BUT : obtenir le rho des coordonn�es polaire du point.
//
//PRINCIPE : Gr�ce � pythagore on calcule la distance qui s�pare le point de l'origine
//
//ENTREE : Un point.
//
//SORTIE : Rho.
///////////////////////////////////////////////////
float CPoint::rho()
{
	return sqrt(pow(this->f_X,2)+pow(this->f_Y,2));
}


// theta ///////////////////////////////////////////////////////////////////////////////////////////
//
//BUT : obtenir le theta des coordonn�es polaire du point.
//
//PRINCIPE : Gr�ce � une formule on calcule l'angle ou se situe notre point rapport � l'origine.
//
//ENTREE : Un point.
//
//SORTIE : Theta.
///////////////////////////////////////////////////
float CPoint::theta()
{
	return atan2(this->f_Y, this->f_X);
}
