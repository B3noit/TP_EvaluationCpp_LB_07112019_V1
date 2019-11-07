#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
class CPoint
{
private://Accessible que dans la classe elle m�me
	//Donn�es membres de la classe
	float f_Rho;
	float f_Theta;

protected://Accessible dans la classe et les enfants de la classe

public://Accessible partout, dans et � l'ext�rieur de la classe

	//Coordonn�es cat�siennes, pour interagir avec l'utilisateur.
	float f_X;
	float f_Y;

	//Prototypes ou d�clarations 
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


	//M�thodes membres
	void deplace(float f_X, float f_Y);
	void homothetie(float f_K);
	void rotation(float f_R);

};
