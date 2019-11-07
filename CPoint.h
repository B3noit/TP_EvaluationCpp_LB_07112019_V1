#pragma once
class CPoint
{
private://Accessible que dans la classe elle même
	//Données membres de la classe
	float f_X;
	float f_Y;

protected://Accessible dans la classe et les enfants de la classe

public://Accessible partout, dans et à l'extérieur de la classe

	//Prototypes ou déclarations 
	//Les gets
	float abscisse();
	float ordonnee();

	//Les sets
	void setX(float f_X);
	void setY(float f_Y);

	//Constructeur
	void Cpoint();


	//Méthodes membres
	void deplace(float f_X, float f_Y);
	void affiche();
};
