#include "programm.h"

programm::programm(void)
{
    //ctor
}

programm::~programm(void)
{
    //dtor
}

void programm::installprog(std::string x,std::string y,std::string z, int i, int g)
{
    if(programm::checkinst()==true)
    {
        progname = x;
        dateiname = "x" + inttostring(g) + "\\" + y;
        startbefehl = z;
        std::cout << x << " - Version x" << g << " wird installiert...";
        std::ifstream dateitest(dateiname);
        befehl.clear();
        befehl = dateiname + startbefehl;
            if(!dateitest)
            {
                std::cout << " Fehler!!!\nDatei nicht vorhanden!\n"<< dateiname << std::endl;
            }
            else
            {
                checkprg(system(befehl.c_str()),i);
            }
            if(progdebug.isdebug()==1)std::cout << "->Befehlszeile:" << befehl << std::endl;
    }
}

void programm::installprog(std::string x,std::string y,std::string z, int i)
{
    if(programm::checkinst()==true)
        {
            progname = x;
            dateiname = y;
            startbefehl = z;
            std::cout << x << " wird installiert...";
            std::ifstream dateitest(dateiname);
            befehl.clear();
            befehl = dateiname + startbefehl;
            if(!dateitest)
            {
                std::cout << " Fehler!!!\nDatei nicht vorhanden!\n"<< dateiname << std::endl;
            }
            else
            {
                checkprg(system(befehl.c_str()),i);
            }
            if(progdebug.isdebug()==1)std::cout << "->Befehlszeile:" << befehl << std::endl;
        }


}

void programm::installsu(std::string x,std::string y,std::string z, int i)
{
            progname = x;
            dateiname = y;
            startbefehl = z;
            std::cout << x << " wird installiert...";
            std::ifstream dateitest(dateiname);
            befehl.clear();
            befehl = dateiname + startbefehl;
            if(!dateitest)
            {
                std::cout << " Fehler!!!\nDatei nicht vorhanden!\n"<< dateiname << std::endl;
            }
            else
            {
                checkprg(system(befehl.c_str()),i);
            }
            if(progdebug.isdebug()==1)std::cout << "->Befehlszeile:" << befehl << std::endl;
}

void programm::msgerfolg(int r)
{
    std::string txt;
    int i = 0;
    do
    {
        txt + "\t";
        i++;
    }
    while (i<r);
    std::cout << txt << "erfolgreich installiert!\n";
}

void programm::msgfehler(int a)
{
    if(a == 3010)
    {
        std::cout << "Das Programm wurde installiert, aber verlangt einen Neustart!" << std::endl;
    }
    else{
        std::cout << msgfehlertext << a << std::endl;
    }

}

void programm::checkprg(int c, int i)
{
        if (c==0)
        {
            msgerfolg(i);
        }
        else
        {
            msgfehler(c);
        }
}

void programm::abfrage(std::string a)
{
    std::cout << "\n" << a << frage;
    programm::install = safecinbooltrue();

}

std::string programm::chkregtyp(std::string argv)
{
    //PRÜFE OB REGTYP dem entspricht, was es sein soll!
    /*switch(argv)
    {
        case "DWORD"
        {
            regtyp
        }
        default
        {
            return "FEHLER";
        }
    }*/
    return "blubs";
}

void programm::reginstall(std::string v, std::string w, std::string x, std::string y,std::string z,int i)
{
    /* checke regtyp */
    char sonderzeichen = '"'; //Anführungszeichen EVERYWHERE ;-)
    regbeschr   = v;
    regname     = w;
    regpfad     = x;
    regart      = y;
    regwert     = z;


    if(regart=="REG_SZ")
    {
    /* Generiert BAT Datei */

        {   //Bat Datei erstellen
            std::cout << "\n" << v << " wird angewandt...";
            std::cout << "\nSchritt " << ++a << " von " << i << std::endl;
            std::ofstream batch;

            if(a==1)
            {
                batch.open("tmp.reg", std::ios::out);
                befehl = "Windows Registry Editor Version 5.00\n\n[" + x + "]\n" + sonderzeichen + w + sonderzeichen + "=" + sonderzeichen + z + sonderzeichen + "\n";
                batch << befehl;
                batch.close();
                std::cout << "\nRegdatei wird angelegt";
            }
            if(a<=i&&i!=1&&firstrun==0)
            {
                batch.open("tmp.reg", std::ios::app);
                befehl + sonderzeichen + w + sonderzeichen + "=" + sonderzeichen + z + sonderzeichen + "\n";
                batch << sonderzeichen + w + sonderzeichen + "=" + sonderzeichen + z + sonderzeichen + "\n";
                batch.close();
                std::cout << "\nRegdatei wird ausgefuellt...";
            }
            if(a==i)
            {
                std::cout << "\n" << v << " wird angewandt, via reg-Datei...\n";
                system("Powershell.exe -Command \"regedit /s tmp.reg\"");
                system("DEL ""tmp.reg""");
            }
            if(progdebug.isdebug()==1)std::cout << "\n" << befehl << std::endl;
            firstrun = 0;
        }
    }
    else
    {       ///%windir%\SysWOW64\runas.exe
            std::cout << "\n" << v << " wird angewandt...\n";
            std::cout << "\nSchritt " << ++a << " von " << i << std::endl;
            befehl = "\%windir\%\\system32\\REG ADD \"" + x + "\" /f";
            std::cout << "Pfad suchen... ";
            system(befehl.c_str());
            befehl.clear();
            befehl = "\%windir\%\\system32\\REG ADD \"" + x + "\" /v \"" + w + "\" /t " + y + " /d \"" + z + "\" /f";
            // REG ADD [ROOT\]RegKey /v ValueName [/t DataType] [/S Separator] [/d Data] [/f]
            system(befehl.c_str());

    }
    if(progdebug.isdebug()==1)std::cout << "\n" << befehl << std::endl;
}

void programm::reginstall(std::string v, std::string w, std::string x, std::string y,std::string z,int i, int b)
{
    /* checke regtyp */
    char sonderzeichen = '"'; //lässt sich sonst im Stream nicht verwenden
    regbeschr   = v;
    regname     = w;
    regpfad     = x;
    regart      = y;
    regwert     = z;



    if(regart=="REG_SZ")
    {
    /* Generiert BAT Datei */

        {   //Bat Datei erstellen
            std::cout << "\n" << v << " wird angewandt...";
            std::cout << "\nSchritt " << ++a << " von " << i << std::endl;
            std::ofstream batch;

            if(a==1)
            {
                batch.open("tmp.reg", std::ios::out);
                befehl = "Windows Registry Editor Version 5.00\n\n[" + x + "]\n" + sonderzeichen + w + sonderzeichen + "=" + sonderzeichen + z + sonderzeichen + "\n";
                batch << befehl;
                batch.close();
                std::cout << "\nRegdatei wird angelegt";
            }
            if(a<=i&&i!=1&&firstrun==0)
            {
                batch.open("tmp.reg", std::ios::app);
                befehl + sonderzeichen + w + sonderzeichen + "=" + sonderzeichen + z + sonderzeichen + "\n";
                batch << sonderzeichen + w + sonderzeichen + "=" + sonderzeichen + z + sonderzeichen + "\n";
                batch.close();
                std::cout << "\nRegdatei wird ausgefuellt...";
            }
            if(a==i)
            {
                std::cout << "\n" << v << " wird angewandt, via reg-Datei...\n";
                system("Powershell.exe -Command \"regedit /s tmp.reg\"");
                system("DEL ""tmp.reg""");
            }
            if(progdebug.isdebug()==1)std::cout << "\n" << befehl << std::endl;
            firstrun = 0;
        }
    }
    else
    {

            std::cout << "\n" << v << " wird angewandt...\n";
            std::cout << "\nSchritt " << ++a << " von " << i << std::endl;
            if(b==32)befehl = "\%windir\%\\system32\\REG ADD \"" + x + "\" /f";
            if(b==64)befehl = "\%windir\%\\SysWOW64\\REG ADD \"" + x + "\" /f";
            std::cout << "Pfad suchen... ";
            system(befehl.c_str());
            befehl.clear();
            if(b==32)befehl = "\%windir\%\\system32\\REG ADD \"" + x + "\" /v \"" + w + "\" /t " + y + " /d \"" + z + "\" /f";
            if(b==64)befehl = "\%windir\%\\SysWOW64\\REG ADD \"" + x + "\" /v \"" + w + "\" /t " + y + " /d \"" + z + "\" /f";
            // REG ADD [ROOT\]RegKey /v ValueName [/t DataType] [/S Separator] [/d Data] [/f]
            system(befehl.c_str());

    }
    if(progdebug.isdebug()==1)std::cout << "\n" << befehl << std::endl;
}

bool programm::checkinst(void)
{
    return programm::install;
}
