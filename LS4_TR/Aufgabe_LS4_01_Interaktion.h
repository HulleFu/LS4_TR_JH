#pragma once
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
#include <map>
#include <string>

using namespace std;
typedef double(*fnptr2)(double, double);
typedef double(*fnptr1)(double);

double eingabe(string input);
double GRechnung(string funct, map<string, fnptr2> fmap, map<string, string> tmap);
double TRechnung(string funct, map<string, fnptr1> fmap, map<string, string> tmap);

