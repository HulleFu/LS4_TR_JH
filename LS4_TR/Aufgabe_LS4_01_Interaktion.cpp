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

#include <iostream>
#include <cstdlib>
#include <locale>
#define _USE_MATH_DEFINES
#include <math.h>
#include <map>
#include <string>
#include "Aufgabe_LS4_01_Interaktion.h"
#include "Aufgabe_LS4_01_GrundRechenArten.h"
#include "Aufgabe_LS4_01_Trigonometrie.h"
#include "Aufgabe_LS4_01_config.h"

using namespace std;

double GRechnung(string funct, map<string, fnptr2> fmap, map<string, string> tmap)
{
	double result;
	cout << tmap[funct] << " ausgewählt. \n \n";
	result = fmap[funct](eingabe("die zweite Zahl"), eingabe("die erste Zahl"));
	cout << "Das Ergebnis der " << tmap[funct] << " lautet:" << result << endl;
	cout << endl;
	return 0;
}

double TRechnung(string funct, map<string, fnptr1> fmap, map<string, string> tmap)
{
	double result;
	cout << tmap[funct] << " ausgewählt. \n \n";
	if (funct == "sin" || "cos" || "tan")
	{
		result = fmap[funct](eingabe("einen Winkel"));
	}
	else
	{
		result = fmap[funct](eingabe("eine Zahl zwischen -1 und 1"));
	}
	cout << "Das Ergebnis der " << tmap[funct] << "Funktion lautet:" << result << endl;
	cout << endl;
	return 0;
}



double eingabe(string input)
{
	double zahl;

	cout << "Bitte geben sie "<< input <<" ein.\n";

	cin >> zahl;

	return zahl;
}
