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

using namespace std;



double GRechnung(string funct)
{
	typedef double(*fnptr)(double, double);
	map<string, fnptr> fmap;
	fmap["add"] = addition;
	fmap["sub"] = subtraktion;
	fmap["mul"] = multiplikation;
	fmap["div"] = division;
	map<string, string> tmap;
	tmap["add"] = "Addition";
	tmap["sub"] = "Subtraktion";
	tmap["mul"] = "Multiplikation";
	tmap["div"] = "Division";
	double result;
	cout << tmap[funct] << " ausgewählt. \n";
	result = fmap[funct](eingabe("die zweite"), eingabe("die erste"));
	cout << "Das Ergebnis der " << tmap[funct] << " lautet:" << result << endl;
	cout << endl;
	return 0;
}

double TRechnung(string funct)
{
	typedef double(*fnptr)(double);
	map<string, fnptr> fmap;
	fmap["sin"] = sinus;
	fmap["cos"] = cosinus;
	fmap["tan"] = tangens;
	fmap["asin"] = arcsinus;
	fmap["acos"] = arccosinus;
	fmap["atan"] = arctangens;
	map<string, string> tmap;
	tmap["sin"] = "Sinus";
	tmap["cos"] = "Cosinus";
	tmap["tan"] = "Tangens";
	tmap["asin"] = "Arcus Sinus";
	tmap["acos"] = "Arcus Cosinus";
	tmap["atan"] = "Arcus Tangens";
	double result;
	cout << tmap[funct] << " ausgewählt. \n";
	result = fmap[funct](eingabe("eine"));
	cout << "Das Ergebnis der " << tmap[funct] << " lautet:" << result << endl;
	cout << endl;
	return 0;
}



double eingabe(string input)
{
	double zahl;

	cout << "Bitte geben sie "<< input <<" Zahl ein\n";

	cin >> zahl;

	return zahl;
}