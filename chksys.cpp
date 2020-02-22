#include "chksys.h"

chksys::chksys()
{
    //ctor
    INITchksys();
}

chksys::~chksys()
{
    //dtor
}


std::string chksys::genwin(void)
{
    /** private Funktion: Generiert eine BAT Datei und führt diese aus, liest Windows Version als String **/
        {
            //Bat Datei erstellen
            std::ofstream batch;
            batch.open("ver.bat", std::ios::out);
            if(!batch)
                {
                    initerfolg = false;
                    return 0;
                }
            batch <<"ver --> ver.txt";
            batch.close();
            system("ver.bat");
            initerfolg = true;
        }

            std::cout <<"Windows Version wird ausgelesen...\n";
            std::fstream in("ver.txt", std::ios::in);
            if (in.good())
            {
                std::string s;
                while (getline(in,s,'\0'));
                std::string versionstext = s;
                std::cout << versionstext;
                in.close();
                return versionstext;
            }
            else
            {
                initerfolg = false;
                return "0";
            }


}

void chksys::readwin(void)
{
    /** public Funktion: vergleicht String mit Versionsnummern, gibt Windows-Versionnummer als INT zurück **/
     {
         //Analysiere und Vergleiche Werte
        readstring = genwin();
        std::size_t found = readstring.find("6.1.");
        if (found!=std::string::npos)
        {
            win = 7;

        }
        found = readstring.find("6.3.");
        if (found!=std::string::npos)
        {
            win = 8;
        }
        found = readstring.find("6.2.");
        if (found!=std::string::npos)
        {
            win = 8;
        }

        found = readstring.find("10.0.");
        if (found!=std::string::npos)
        {
            win = 10;
        }
            // Zerlege Werte
            readstring.erase(0, 28);
            readstring.erase(readstring.end()-2, readstring.end());

        if(win != 0)
        {
            std::cout << "\nSoweit ermittelt handelt es sich um Windows " << win;
            std::vector<std::string> aktuelles = {aktwin7,aktwin8,aktwin10};
                for( const auto &s : aktuelles )
                {
                    std::string temp = s;
                    found = readstring.find(temp);
                    if (found!=std::string::npos)
                    {
                        aktver = true;
                    }

                }
                if(aktver == false&&win!=0)std::cout << "\nEs wurde eine veraltete Version festgestellt!"<< std::endl;
        }
        else
        {
            std::cout <<"\nWindows Version konnte nicht ermittelt werden. " << std::endl;
            initerfolg = false;
        }
     }
}

void chksys::readbit()
{
    /** private Funktion: prüft ob eine x64 oder x32 Datei vorhanden ist**/
    genbit();
    std::fstream in64("x64.txt", std::ios::in);
    std::fstream in32("x32.txt", std::ios::in);
            if (in64.good())
                {
                bit = 64;
                std::cout << " x" << bit << std::endl;
                in64.close();
                in32.close();
                initerfolg = true;
                }

             if (in32.good())
                {
                bit = 32;
                std::cout << " x" << bit << std::endl;
                in64.close();
                in32.close();
                initerfolg = true;
                }
            if (in32.good()==false&&in64.good()==false)
                {
                std::cout << "- Architektur unbekannt!" << std::endl;
                initerfolg = false;
                }

}

void chksys::genbit(void)
{
    /** private Funktion: generiert eine BAT Datei, führt diese aus und löscht dann diese **/
        {
            std::ofstream batch;
            std::string bitline1{"@echo off"};
            std::string bitline2{"reg query \"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Environment\" /v PROCESSOR_ARCHITECTURE | find /i \"x86\" > nul"};
            std::string bitline3{"if \%errorlevel\%==0 ("};
            std::string bitline4{"    echo 32-bit --> x32.txt"};
            std::string bitline5{") else ("};
            std::string bitline6{"    echo 64-bit --> x64.txt"};
            std::string bitline7{")"};
            std::string befehl = bitline1 + "\n" + bitline2 + "\n" + bitline3 + "\n" + bitline4 + "\n" + bitline5 + "\n" + bitline6 + "\n" + bitline7 + "\n";
            //Bat Datei erstellen
            batch.open("bit.bat", std::ios::out);
            if(!batch)
                {
                initerfolg = false;
                }
            batch << befehl;
            batch.close();
            system("bit.bat");
        }
}


void chksys::INITchksys(void)
{
    cleanup();
    readwin();
    readbit();
    cleanup();
}


void chksys::cleanup(void)
{
            system("DEL ""x64.txt""");
            system("DEL ""x32.txt""");
            system("DEL ""bit.bat""");
            system("DEL ""ver.txt""");
            system("DEL ""ver.bat""");
}

int chksys::getwin(void)
{
            if(initerfolg==false)return 0;
            return win;
}

int chksys::getbit(void)
        {
            if(initerfolg==false)return 0;
            return bit;
        }

bool chksys::getver(void)
        {
            if(initerfolg==false)return false;
            return aktver;
        }

std::string chksys::getcompletever(void)
        {
            if(initerfolg==false)return "FEHLER";
            return readstring;
        }
