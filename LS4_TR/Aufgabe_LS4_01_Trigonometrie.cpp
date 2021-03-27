//
// 
//		████████╗███████╗░█████╗░███╗░░░███╗  ████████╗██╗░░░██╗██████╗░██████╗░░█████╗░
//		╚══██╔══╝██╔════╝██╔══██╗████╗░████║  ╚══██╔══╝██║░░░██║██╔══██╗██╔══██╗██╔══██╗
//		░░░██║░░░█████╗░░███████║██╔████╔██║  ░░░██║░░░██║░░░██║██████╔╝██████╦╝██║░░██║
//		░░░██║░░░██╔══╝░░██╔══██║██║╚██╔╝██║  ░░░██║░░░██║░░░██║██╔══██╗██╔══██╗██║░░██║
//		░░░██║░░░███████╗██║░░██║██║░╚═╝░██║  ░░░██║░░░╚██████╔╝██║░░██║██████╦╝╚█████╔╝
//		░░░╚═╝░░░╚══════╝╚═╝░░╚═╝╚═╝░░░░░╚═╝  ░░░╚═╝░░░░╚═════╝░╚═╝░░╚═╝╚═════╝░░╚════╝░
//
//
// 
// 
//		Inhalt:
//				Einordnung:				FS-LF5-LS4
//				Projekt:				Aufgabe_ls4_01
//				Thema:					Modularar Taschenrechner
//
//		Autor:	
//				Name:					Jan Haag
//				Klasse:					FS-ETTZ-91
//
//		Datum:		
//				Erstellt:				20.03.2021
//				Letzte Änderung:		open end
//

#include <cstdlib>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Aufgabe_LS4_01_Trigonometrie.h"

double sinus(double z1)
{
	double result;

	result = sin(z1 * M_PI/180.0);

	return result;
}

double cosinus(double z1)
{
	double result;

	result = cos(z1 * M_PI / 180.0);

	return result;
}

double tangens(double z1)
{
	double result;

	result = tan(z1 * M_PI / 180.0);

	return result;
}

double arcsinus(double z1)
{
	double result;

	result = asin(z1) * 180.0 / M_PI;

	return result;
}

double arccosinus(double z1)
{
	double result;

	result = acos(z1) * 180.0 / M_PI;

	return result;
}

double arctangens(double z1)
{
	double result;

	result =  atan(z1) * 180.0 / M_PI;

	return result;
}

