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
//				Thema:					Messwertauswertung mit SimSTB
//
//		Autor:	
//				Name:					Lena de Vries, Julian Weber, Domenic Schings, Raphael Comoth, Jan Haag
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


using namespace std;


int grundrechenarten();
int trigonometrie();



int main()
{
	locale::global(locale("German_germany"));
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
	double result;

	do
	{
		cout << " 0. Beenden \n 1. Addition \n 2. Subtraktion \n 3. Multiplikation \n 4. Division \n ";

		cin >> untermenu;

		switch (untermenu)
		{
		case 0:															//Beenden
			cout << "Beenden";
			return 0;
			break;
		case 1:															//Addition
			GRechnung("add");
			break;
		case 2:															//Subtraktion
			GRechnung("sub");
			break;
		case 3:															//Multiplikation
			GRechnung("mul");
			break;
		case 4:															//Division
			GRechnung("div");
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
		cout << " 0. Beenden \n 1. Sinus \n 2. Cosinus \n 3. Tangens \n";
		cout << " 4. Arcus Sinus \n 5. Arcus Cosinus \n 6. Arcus Tangens \n";

		cin >> untermenu;

		switch (untermenu)
		{
		case 0:															//Beenden
			cout << "Beenden";
			return 0;
			break;
		case 1:															//Sinus
			TRechnung("sin");
			break;
		case 2:															//Cosinus
			TRechnung("cos");
			break;
		case 3:															//Tangens
			TRechnung("tan");
			break;
		case 4:															//Arcus Sinus
			TRechnung("asin");
			break;
		case 5:															//Arcus Cosinus
			TRechnung("acos");
			break;
		case 6:															//Arcus Tangens
			TRechnung("atan");
			break;
		}

	} while (untermenu != 0);


}

