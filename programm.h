#ifndef PROGRAMM_H
#define PROGRAMM_H
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "safecin.h"
#include "debugmodes.h"

class programm
{
public:
    void installprog(std::string, std::string, std::string, int, int);
    void installprog(std::string, std::string, std::string, int);
    void installsu(std::string, std::string, std::string, int);
    void abfrage(std::string);
    void reginstall(std::string, std::string, std::string, std::string, std::string, int);
    void reginstall(std::string, std::string, std::string, std::string, std::string, int, int);
    bool checkinst(void);
    void setinst(bool);
    programm();             //Constructur
    virtual ~programm();    //Destructur
protected:
private:
    void checkprg(int, int);
    void msgerfolg(int);
    void msgfehler(int);
    std::string chkregtyp(std::string);
    std::string progname;
    std::string dateiname;
    std::string startbefehl;
    std::string befehl;
    std::string regbeschr;
    std::string regname;
    std::string regpfad;
    std::string regart;
    std::string regwert;
    debugmodes progdebug;
    int a{0};
    bool firstrun{1};
    bool install{false};
    std::string msgfehlertext = " - Fehler bei der Installation!\n\nFehlercode: ";
    std::string frage = " Installieren? ";
};

#endif // PROGRAMM_H
