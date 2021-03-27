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
#include "Aufgabe_LS4_01_GrundRechenArten.h"


using namespace std;


double addition(double z2, double z1)
{
	double result;

	result = z1 + z2;

	return result;
}

double subtraktion(double z2, double z1)
{
	double result;

	result = z1 - z2;

	return result;
}

double multiplikation(double z2, double z1)
{
	double result;

	result = z1 * z2;

	return result;
}

double division(double z2, double z1)
{
	double result;

	result = z1 / z2;

	return result;
}

