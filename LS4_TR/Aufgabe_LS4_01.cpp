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
//				Thema:					
//
//		Autor:	
//				Name:					Jan Haag
//				Klasse:					FS-ETTZ-91
//
//		Datum:		
//				Erstellt:				20.03.2021
//				Letzte Änderung:		open end
//
// ---------------------------------------------------
//  Jans's TR Branch
//		╔══╦╗
//		║═╦╬╬═╦╦═╦═╦╦╗╔╦╦╦═╦═╗
//		║╔╝║║║║║╬║╩╣╔╝║║║║╩╣╬║
//		╚╝─╚╩╩═╬╗╠═╩╝─╚══╩═╬╗║
//		───────╚═╝─────────╚═╝
// ---------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <locale>
#include <Windows.h>
#include <map>
#include <string>

#include "Aufgabe_LS4_01_Interaktion.h"
#include "Aufgabe_LS4_01_GrundRechenArten.h"
#include "Aufgabe_LS4_01_Trigonometrie.h"
#include "Aufgabe_LS4_01_config.h"



using namespace std;

typedef double(*fnptr2)(double, double);
typedef double(*fnptr1)(double);
map<string, fnptr2> gfmap;
map<string, fnptr1> tfmap;
map<string, string> tmap;

int grundrechenarten();
int trigonometrie();


int main()
{
	locale::global(locale("German_germany"));
		
	gfmap["add"] = &addition;										//Map zuordnen
	gfmap["sub"] = &subtraktion;
	gfmap["mul"] = &multiplikation;
	gfmap["div"] = &division;
	tfmap["sin"] = sinus;
	tfmap["cos"] = cosinus;
	tfmap["tan"] = tangens;
	tfmap["asin"] = arcsinus;
	tfmap["acos"] = arccosinus;
	tfmap["atan"] = arctangens;

	tmap["add"] = "Addition";
	tmap["sub"] = "Subtraktion";
	tmap["mul"] = "Multiplikation";
	tmap["div"] = "Division";
	tmap["sin"] = "Sinus";
	tmap["cos"] = "Cosinus";
	tmap["tan"] = "Tangens";
	tmap["asin"] = "Arcus Sinus";
	tmap["acos"] = "Arcus Cosinus";
	tmap["atan"] = "Arcus Tangens";

	int hauptmenu;

	do
	{
		cout << "Hauptmenu:\n";
		cout << " 0. Beenden \n 1. Grundrechenarten \n 2. Trigonometrie \n ";
		cout << "Auswahl: ";
		cin >> hauptmenu;
		cout << endl;

		switch (hauptmenu)
		{
		case 0:														//Beenden
			return 0;
			break;
		case 1:														//Grundrechenarten
			cout << "Grundrechenarten ausgewählt. \n \n";
			grundrechenarten();
			break;
		case 2:														//Trigonometrie
			cout << "Trigonometrie ausgewählt. \n \n";
			trigonometrie();
			break;
		}

	} while (hauptmenu != 0);
}


int grundrechenarten()
{
	int untermenu;
	double result;

	do
	{
		cout << "Bitte wählen sie eine der Rechenoperationen. \n";
		cout << " 0. Beenden \n 1. Addition \n 2. Subtraktion \n 3. Multiplikation \n 4. Division \n ";
		cout << "Auswahl: ";
		cin >> untermenu;
		cout << endl;

		switch (untermenu)
		{
		case 0:															//Beenden
			cout << "Beenden\n \n";
			return 0;
			break;
		case 1:															//Addition
			GRechnung("add", gfmap, tmap);
			break;
		case 2:															//Subtraktion
			GRechnung("sub", gfmap, tmap);
			break;
		case 3:															//Multiplikation
			GRechnung("mul", gfmap, tmap);
			break;
		case 4:															//Division
			GRechnung("div", gfmap, tmap);
			break;
		}
	} while (untermenu != 0);

	return 0;
}


int trigonometrie()
{
	int untermenu;
	do
	{
		cout << "Bitte wählen sie eine der Rechenoperationen. \n";
		cout << " 0. Beenden \n 1. Sinus \n 2. Cosinus \n 3. Tangens \n";
		cout << " 4. Arcus Sinus \n 5. Arcus Cosinus \n 6. Arcus Tangens \n";
		cout << "Auswahl: ";
		cin >> untermenu;
		cout << endl;

		switch (untermenu)
		{
		case 0:															//Beenden
			cout << "Beenden\n \n";
			return 0;
			break;
		case 1:															//Sinus
			TRechnung("sin", tfmap, tmap);
			break;
		case 2:															//Cosinus
			TRechnung("cos", tfmap, tmap);
			break;
		case 3:															//Tangens
			TRechnung("tan", tfmap, tmap);
			break;
		case 4:															//Arcus Sinus
			TRechnung("asin", tfmap, tmap);
			break;
		case 5:															//Arcus Cosinus
			TRechnung("acos", tfmap, tmap);
			break;
		case 6:															//Arcus Tangens
			TRechnung("atan", tfmap, tmap);
			break;
		}

	} while (untermenu != 0);


}