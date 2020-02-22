#include "safecin.h"

bool safecinbooltrue(void)
{
    std::cout << eingabestring;
    int a = 0;
    std::string x;
    bool b;


       do{
            std::cin >> x;
            if(x=="true" || x=="True"|| x=="Ja" || x=="ja" || x=="1")
            {
                a=1;
                b = true;
            }
    /*False Aussagen */
            if(x=="false" || x=="False" || x=="nein" || x=="0" || x=="Nein")
            {
                a=1;
                b = false;
            }
        }while(a==0);
        return b;

}

int safecinint(void)
{
    std::cout << eingabestring;
    int b;
    std::string::size_type sz;
    bool a = false;
    do{
    std::string x;
    std::cin >> x;
    try{
        b = std::stoi(x, &sz, 10);
        return b;
    }
    catch (std::invalid_argument&)
    {
        a = false;
    }
    catch (std::out_of_range&)
    {
        a = false;
    }
    }while(a==false);

}

std::string inttostring(int a)
{
    try{
        std::string str = std::to_string(a);
        return str;
    }
    catch (std::invalid_argument&)
    {
        a = 0;
    }
    catch (std::out_of_range&)
    {
        a = 0;
    }

}
