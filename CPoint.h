#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
class CPoint
{
private://Accessible que dans la classe elle même
	//Données membres de la classe
	float f_Rho;
	float f_Theta;

protected://Accessible dans la classe et les enfants de la classe

public://Accessible partout, dans et à l'extérieur de la classe

	//Coordonnées catésiennes, pour interagir avec l'utilisateur.
	float f_X;
	float f_Y;

	//Prototypes ou déclarations 
	//Les gets
	float abscisse();
	float ordonnee();
	float rho();
	float theta();


	//Les sets
	void setX(float f_X);
	void setY(float f_Y);
	void setRho(float f_Rho);
	void setTheta(float f_Theta);

	//Constructeur
	void Cpoint();


	//Méthodes membres
	void deplace(float f_X, float f_Y);
	void homothetie(float f_K);
	void rotation(float f_R);

};
