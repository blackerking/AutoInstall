#ifndef CHKSYS_H_INCLUDED
#define CHKSYS_H_INCLUDED

/**
*
*        int ver = readwin(); -> Liest Windows Version (7,8,81,10)
*        int bit = readbit(); -> Liest Bitversion aus  (64,32)
*
*
**/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <string>

/**Diese Werte müssen an die aktuelle Windows Version angepasst werden!**/

#define aktwin7 "6.1.7601"
#define aktwin8 "6.3.9600"
#define aktwin10 "10.0.18363"



class chksys
{
    public:
        chksys();
        virtual ~chksys();
        int getwin(void);           //Welche Windows?
        int getbit(void);           //Welche BIT-Version
        bool getver(void);          //Aktuelleversion? True == Okay
        std::string getcompletever(void); //Komplette Versionsnummer
    protected:

    private:
        void INITchksys(void);      //Initiere Auslesen
        void readbit(void);         //lese BIT
        void readwin(void);         //lese Windows und Version
        void cleanup(void);
        void genbit(void);          //generiere BIT Datei
        std::string genwin(void);          //generiere WIN Datei
        bool initerfolg = 0;        //Erfolg beim Initialisieren
        bool aktver = false;        //Aktuelle Version
        std::string readstring;
        int bit = 0;
        int win = 0;
};
#endif // NAMESTART_H_INCLUDED
