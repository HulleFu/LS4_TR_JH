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
#define _USE_MATH_DEFINES
#include <math.h>
#include "Aufgabe_LS4_01_Interaktion.h"

using namespace std;


int menu()
{
	int hauptmenu;
	

	do
	{
		cout << " 0. Beenden \n 1. Grundrechenarten \n 2. Trigonometrie \n ";
		cin >> hauptmenu;

		switch (hauptmenu)
		{
			case 0:														//Beenden

				return 0;
				break;
			case 1:														//Grundrechenarten
				cout << "Grundrechenarten ausgewählt. \n";
				cout << "Bitte wählen sie eine der Rechenoperationen. \n";
				grundrechenarten();
				break;
			case 2:														//Trigonometrie
				cout << "Trigonometrie ausgewählt. \n";
				cout << "Bitte wählen sie eine der Rechenoperationen. \n";
				trigonometrie();
				break;
		}		

	} while (hauptmenu != 0);

}


int grundrechenarten()
{
	int untermenu;
	do
	{
		cout << " 0. Beenden \n 1. Addition \n 2. Subtraktion \n 3. Multiplikation \n 4. Division \n ";
		
		cin >> untermenu;

		switch (untermenu)
		{
			case 0:	//Beenden
				cout << "Beenden";
				return 0;
				break;
			case 1:	//Addition
				cout << "Addition ausgewählt. \n";
				break;
			case 2:	//Subtraktion
				cout << "Subtraktion ausgewählt. \n";
				break;
			case 3:	//Multiplikation
				cout << "Multiplikation ausgewählt. \n";
				break;
			case 4:	//Division
				cout << "Division ausgewählt. \n";
				break;
		}
	} 	while (untermenu != 0);

}


int trigonometrie()
{
	int untermenu;
	do
	{
		cout << " 0. Beenden \n 1. Sinus \n 2. Cosinus \n 3. Tangens \n";
		cout << " 4. Arcus Sinus \n 5. Arcus Cosinus \n 6. Arcus Tangens \n";

		cin >> untermenu;

		switch (untermenu)
		{
		case 0:	//Beenden
			cout << "Beenden";
			return 0;
			break;
		case 1:	//Sinus
			cout << "Sinus ausgewählt. \n";
			break;
		case 2:	//Cosinus
			cout << "Cosinus ausgewählt. \n";
			break;
		case 3:	//Tangens
			cout << "Tangens ausgewählt. \n";
			break;
		case 4:	//Arcus Sinus
			cout << "Arcus Sinus ausgewählt. \n";
			break;
		case 5:	//Arcus Cosinus
			cout << "Arcus Cosinus ausgewählt. \n";
			break;
		case 6:	//Arcus Tangens
			cout << "Arcus Tangens ausgewählt. \n";
			break;
		}

	} 	while (untermenu != 0);


}
