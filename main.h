#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/***
***************AutoInstall***************

"Small" tool for installing software/updates
and much more.
Can install:     MSI ; EXE
Can apply:       REG; PS1

The main idea was to automate the most
installation and configuration procedure.
Neat tool for small IT-offices and sale-
points.

Detects architectur and version, makes
installation and preperation for new PCs a
lot faster.

First entry is configurable for most used
settings. Second for choosing software.

Registryhacks are applied all.

*********************************************
Supported Compiler:
i686-w64-mingw32-g++

Linker Settings:
-static-libgcc
-static
-Wl,--allow-multiple-definition

Compiler Settings:
-fexceptions
-pthread
-static-libgcc
-static-libstdc++

*********************************************
installationfiles:
x64\setupname.exe or .msi
x32\setupname.exe or .msi

Andere\Virenscanner\ -> not so used
system\WinPKG.exe -> for example

*********************************************
Shutouts to my friends of IT-Taucha
Greetings to Eric O. for his ideas and
solid questions.




***/


/** Includes **/

//Standard Libs
#include <iostream>
#include <stdlib.h>

//Eigene Libs
#include "safecin.h"
#include "namestart.h"
#include "version.h"
#include "mainlang.h"

///Eigene OOP Libs
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
