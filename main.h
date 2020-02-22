#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/** Includes **/

//Standard Libs
#include <iostream>
#include <stdlib.h>

//#include <thread>


//Eigene Libs
#include "safecin.h"
#include "namestart.h"
#include "version.h"
#include "mainlang.h"

///OOP Libs
#include "chksys.h"
#include "logo.h"
#include "debugmodes.h"
#include "programm.h"
#include "action.h"
/** Prototypen **/

void begruesung(void);
void cls(void);
int menu(void);
void standardinstall(bool);

void suinstall(void);
void virenscanner(void);
void msoffice(void);
void abfrage(std::string);
void debugmode(void);
void auswahltext(void);
void printver(void);
void fehlerhandling(void);
void setwindows(void);
void shutdownfrage(void);
/** globale Variablen **/


int ver{0};
int bit{0};
int benutzt{0};
int input{0};
bool aktver{0};
std::string kompletteversion{};
debugmodes debugone;

#endif // MAIN_H_INCLUDED
