#pragma once
class CPoint
{
private://Accessible que dans la classe elle m�me
	//Donn�es membres de la classe
	float f_X;
	float f_Y;

protected://Accessible dans la classe et les enfants de la classe

public://Accessible partout, dans et � l'ext�rieur de la classe

	//Prototypes ou d�clarations 
	//Les gets
	float getX();
	float getY();

	//Les sets
	void setX(float f_X);
	void setY(float f_Y);

	//Constructeur
	void Cpoint();


	//M�thodes membres
	void deplace(float f_X, float f_Y);
	void affiche();
};