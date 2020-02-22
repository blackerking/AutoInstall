#include "main.h"

int main()
{
   return menu();
}

int menu(void)                      //Hauptmenü
{
    chksys chksys {};
    ver = chksys.getwin();
    bit = chksys.getbit();
    aktver = chksys.getver();
    kompletteversion = chksys.getcompletever();
    if(ver==0||bit==0)
    {
        //wenn es nicht vom Stick gestartet wird
        fehlerhandling();
    }
    action act{bit,line};
    cls();
    begruesung();
    programm();

    do
    {

        input = 0;
        auswahltext();

        input = safecinint();
        switch(input)
        {
        case 0: //Debugmodus
        {
            debugmode();
            break;
        }
        case 1: //Vollständige Installation
        {
            standardinstall(true);
            suinstall();
            if(ver==7)
                {
                    act.win7();
                }
            if(ver==8)
                {
                    act.win8();
                }
            if(ver==10)
                {
                    act.win10();
                }
            benutzt++;
            input = 99;
            break;
        }
        case 2: //Einzel Installation
        {
            standardinstall(true);
            benutzt++;
            break;
        }
        case 3: //Systemupdates installieren
        {
            suinstall();
            benutzt++;
            break;
        }
        case 4:
        {
            if(ver!=7)
            {
                break;
            }
            else
            {
                act.win7();
                benutzt++;
                break;
            }
            break;
        }
        case 5:
        {
            if(ver!=8)
            {
                break;
            }
            else
            {
                act.win8();
                benutzt++;
                break;
            }
            break;
        }
        case 6:
        {
            if(ver!=10)
            {
                break;
            }
            else
            {
                act.win10();
                benutzt++;
                break;
            }
        }
        case 7:
        {
            virenscanner();
            benutzt++;
            break;
        }
        case 8:
        {
            if(debugone.isdebug()==true)
            {
                msoffice();
                benutzt++;
            }
            break;
        }
        case 10:
            {
                if(ver==10)
                {
                    programm zehnupdate {};
                    zehnupdate.installsu(suxxname, suxxdatei, suxxstart, suxxtxttabs);
                }
                break;
            }
        case 98:
            {
                setwindows();
                break;
            }
        case 99:
        {
            cls();
            break;
        }

        default:
            std::cout <<"\n" << line << "Falsche Eingabe\n" << line << endl;
            break;
        }
    }
    while(input!=99);
            if(benutzt>=1)
                {
                    shutdownfrage();
                }
            std::cout << ende << endl;
    return 0;
}

void standardinstall(bool x)        //Programme installieren
{
    //Klassen initialisieren\t
    bool b;
    programm prg01 {};
    programm prg02 {};
    programm prg04 {};
    programm prg05 {};
    programm prg06 {};
    programm prg07 {};
    programm prg08 {};
    programm prg09 {};
    programm prg10 {};
    programm prg11 {};
    programm prg12 {};
    programm prg13 {};
    programm prg14 {};
    programm prg16 {};

    do
    {
        abfrage(prg);
        prg01.abfrage(prg01name);
        prg02.abfrage(prg02name);
        prg13.abfrage(prg13name);
        prg04.abfrage(prg04name);
        prg05.abfrage(prg05name);
        prg06.abfrage(prg06name);
        prg08.abfrage(prg08name);
        prg09.abfrage(prg09name);
        //prg10.abfrage(prg10name);
        prg12.abfrage(prg12name);
        prg14.abfrage(prg14name);
        prg16.abfrage(prg16name);
        if(ver==8||ver==10)         //Classicshell installieren?
            {
                prg11.abfrage(prg11name);
            }

        std::cout << korrekt;
        if(prg01.checkinst() == true)std::cout << prg01name << endl;
        if(prg02.checkinst() == true)std::cout << prg02name << endl;
        if(prg13.checkinst() == true)std::cout << prg13name << endl;
        if(prg04.checkinst() == true)std::cout << prg04name << endl;
        if(prg05.checkinst() == true)std::cout << prg05name << endl;
        if(prg06.checkinst() == true)std::cout << prg06name << endl;
        if(prg08.checkinst() == true)std::cout << prg08name << endl;
        if(prg09.checkinst() == true)std::cout << prg09name << endl;
        //if(prg10.checkinst() == true)std::cout << prg10name << endl;
        if(prg12.checkinst() == true)std::cout << prg12name << endl;
        if(prg14.checkinst() == true)std::cout << prg14name << endl;
        if(prg11.checkinst() == true)std::cout << prg11name << endl;
        if(prg16.checkinst() == true)std::cout << prg16name << endl;
        std::cout << eingabe;
        b = safecinbooltrue();
    } while(b==false);

        if(debugone.isdebug()==true)std::cout << "\a";

        //Installation der Programme
        action act{0};
        std::cout << installbegin << endl;
        prg01.installprog(prg01name, prg01datei, prg01start, prg01txttabs, bit);
        prg02.installprog(prg02name, prg02datei, prg02start, prg02txttabs, bit);
        prg04.installprog(prg04name, prg04datei, prg04start, prg04txttabs, bit);
        prg05.installprog(prg05name, prg05datei, prg05start, prg05txttabs, bit);
        prg06.installprog(prg06name, prg06datei, prg06start, prg06txttabs, bit);
        prg08.installprog(prg08name, prg08datei, prg08start, prg08txttabs, bit);
        if(prg09.checkinst()==true)
            {
                prg09.installprog(prg09name, prg09datei, prg09start, prg09txttabs, bit);
                act.zipreg();
            }
        //prg10.installprog(prg10name, prg10datei, prg10start, prg10txttabs, bit);
        if(ver==10||ver==8)prg11.installprog(prg11name, prg11datei, prg11start, prg11txttabs, bit);
        prg13.installprog(prg13name, prg13datei, prg13start, prg13txttabs, bit);
        prg14.installprog(prg14name, prg14datei, prg14start, prg14txttabs, bit);
        prg12.installprog(prg12name, prg12datei, prg12start, prg12txttabs, bit);
        if(prg16.checkinst()==true)
        {
                prg16.installprog(prg16name, prg16datei, prg16start, prg16txttabs, bit);
                act.killdriverboosterapp();
        }
        std::cout << "\n"<< installend << endl;
        if(debugone.isdebug()==true)std::cout << "\a";
}

void suinstall(void)                //System Updates installieren
{
    programm sua {};
    programm sub {};
    programm suc {};
    programm sud {};
    programm sue {};
    programm suf {};
    std::cout << wuaustop;
    system("net stop wuauserv");
    std::cout << installbegin << endl;
    sua.installsu(suaname, suadatei, suastart, suatxttabs);
    sub.installsu(subname, subdatei, substart, subtxttabs);
    if(ver==7&&bit==32)suc.installsu(sucname, sucdatei, sucstart, suctxttabs);
    if(ver==7&&bit==64)sud.installsu(sudname, suddatei, sudstart, sudtxttabs);
    if(ver==8&&bit==32)sue.installsu(suename, suedatei, suestart, suetxttabs);
    if(ver==8&&bit==64)suf.installsu(sufname, sufdatei, sufstart, suftxttabs);
    std::cout << wuaustart << endl;
    system("net start wuauserv");
    std::cout << installend << endl;
}

void virenscanner(void)
{

    programm vir01 {};
    programm vir02 {};
    programm vir03 {};
    programm vir04 {};

    abfrage(vir);
    vir01.abfrage(vir01name);
    vir02.abfrage(vir02name);
        if(bit==86)     //Virenscanner
        {
            vir03.abfrage(vir03name);
        }
        if(bit==64)     //Virenscanner
        {
            vir04.abfrage(vir04name);
        }

    std::cout << installbegin << endl;
    if(vir01.checkinst()==true)vir01.installprog(vir01name, vir01datei, vir01start, vir01txttabs);
    if(vir02.checkinst()==true)vir02.installprog(vir02name, vir02datei, vir02start, vir02txttabs);
    if(vir03.checkinst()==true)vir03.installprog(vir03name, vir03datei, vir03start, vir03txttabs);
    if(vir04.checkinst()==true)vir04.installprog(vir04name, vir04datei, vir04start, vir04txttabs);
    std::cout << installend << endl;
    if(debugone.isdebug()==true)std::cout << "\a";
}

void msoffice(void)
{
    //TODO
    programm mo03 {};
    programm mo07 {};
    programm mo10hs {};
    programm mo10hb {};
    programm mo10p {};

    abfrage(mo);
    mo03.abfrage(mo03name);
    mo07.abfrage(mo07name);
    mo10hs.abfrage(mo10hsname);
    mo10hb.abfrage(mo10hbname);

    std::cout << installbegin << endl;
    if(mo03.checkinst()==true)mo03.installprog(mo03name, mo03datei, mo03start, 1);
    if(mo07.checkinst()==true)mo07.installprog(mo07name, mo07datei, mo07start, 1);
    if(mo10hs.checkinst()==true)mo10hs.installprog(mo10hsname, mo10hsdatei, mo10hsstart, 1);
    if(mo10hb.checkinst()==true)mo10hb.installprog(mo10hbname, mo10hbdatei, mo10hbstart, 1);
    std::cout << installend << endl;
}

void abfrage(std::string arg)
{
    std::cout << line << "Welche " << arg << " soll installiert werden?\n" << line << line <<"  1 = Ja; 0 = Nein \n" << line << endl;
}

void begruesung(void)
{
    logo();
    logo logo1 {};
    logo1.printlogo();              //Logo print ausführen
    line = logo1.getline();
    std::cout << "\t\t\tAutoinstall Version: " << YEAR << "." << MONTH << "." <<  DATE;
}

void cls(void)
{
    system("cls");
}

void auswahltext(void)
{
        std::cout <<"\n\n" << line << "\t\t\tWindows " << ver << " - X" << bit << std::endl;
        if(aktver==false)std::cout << "\t\tNicht aktuelle Windows Version!\n\t\t\t" << kompletteversion << std::endl;
        std::cout << line << "\t\t\tBitte waehlen Sie:\n"<<line<<"  -1-\tKomplette Installation\n  -2-\tInstallation diverser Programme\n  -3-\tSystem-Updates installieren" << endl;
        if((ver==7)||(debugone.isdebug()==true)) std::cout << "  -4-\tWindows 7 Registry Tweaks installieren\n";
        if((ver==8)||(debugone.isdebug()==true)) std::cout << "  -5-\tWindows 8 Registry Tweaks installieren\n";
        if((ver==10)||(debugone.isdebug()==true))std::cout << "  -6-\tWindows 10 Registry Tweaks installieren\n";
        std::cout << "  -7-\tVirenscanner installieren\n";
        if(debugone.isdebug()==true) std::cout << "  -8-\tMicrosoft Office installieren\n";
        if(aktver==0)                            std::cout << "  -10-\tWindows Version auf aktuellere Patchen\n" << "  -98-\terkannte Windows Version aendern\n";

        std::cout << "\n###########################\n## -99- Programm Beenden!##\n###########################\n" << line << std::endl;
        if(debugone.isdebug()==true)
            {
                std::cout << line << "\n";
                if(aktver==true)std::cout << "aktuelle ";
                std::cout << "Windows Version: Windows " << ver << " x" << bit << "\n"<< line << std::endl;
                printver();
            }
}

void debugmode(void)
{
        debugone.booldebug = !debugone.booldebug;
        if(debugone.booldebug==true)
        {
            system("color A");
        }
        if(debugone.booldebug==false)system("color 9f");
        cls();

}

void printver(void)
{
    std::cout << line << line << "*****DEBUG aktiv!*****\n";
    std::cout << "*****Version: " << FULLVERSION_STRING <<"*****\n" << "*****Kompiliert am: " << DATE << "." << MONTH << "." << YEAR << "*****\n" << line << line << endl;
}

void setwindows(void)
{
    std::cout << line << "\n";
    if(aktver==true)std::cout << "aktuelle ";
    std::cout <<"Windows Version: Windows " << ver << " x" << bit << "\n"<< line << std::endl;
    if(debugone.isdebug()==true)
    {
                    std::cout << line << "\n Welche Windows Version soll es sein?\n7 ; 8 ; 10\n Windows ";
                    ver = safecinint();
                    std::cout << line << "\n Welche Bit Version soll es sein?\n86 ; 64\nWindows " << ver << " - x";
                    bit = safecinint();
    }
}

void fehlerhandling(void)
{
    cls();
    system("color C");
    std::cout << line << "       *****FEHLER!*****\nDie Systemarchitektur konnte nicht erkannt werden!\nWomoeglich wurde das Programm aus dem Netzwerk gestartet.\nEs koennen dennoch einige Funktionen aufgerufen werden.\n" << line << std::endl;
    std::cout << line << "Das Programm benoetigt Eingaben(1) oder muss beendet werden(0)... ";
    if(safecinbooltrue()==false)
        {
            exit(0);
        }
    debugmode();
    setwindows();
    debugmode();
}

void shutdownfrage(void)
{
     std::cout << line << "Soll Windows " << ver << " neugestartet werden?";
                if(safecinbooltrue()==true)
                {
                    system("shutdown /r /t 15");
                    std::cout << "System wird in 15 Sekunden neugestartet\n" << endl;
                }
}

