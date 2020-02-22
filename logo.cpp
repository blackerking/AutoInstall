#include "logo.h"

logo::printlogo(void)
{
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(1,2);
    const int arg = distribution(generator);
    if(arg==1)
    {
    std::cout <<line11<< std::endl;
    std::cout <<line12<< std::endl;
    std::cout <<line13<< std::endl;
    std::cout <<line14<< std::endl;
    std::cout <<line15<< std::endl;
    std::cout <<line16<< std::endl;
    logoline = line10;
    }

    if(arg==2)
    {
    std::cout <<line21<< std::endl;
    std::cout <<line22<< std::endl;
    std::cout <<line23<< std::endl;
    std::cout <<line24<< std::endl;
    std::cout <<line25<< std::endl;
    logoline = line20;
    }

    if(arg==3)
    {
    std::cout <<line31<< std::endl;
    std::cout <<line32<< std::endl;
    std::cout <<line33<< std::endl;
    std::cout <<line34<< std::endl;
    std::cout <<line35<< std::endl;
    std::cout <<line36<< std::endl;
    logoline = line30;
    }

    if(arg==4)
    {
    std::cout <<line41<< std::endl;
    std::cout <<line42<< std::endl;
    std::cout <<line43<< std::endl;
    std::cout <<line44<< std::endl;
    logoline = line40;
    }

    if(arg==5)
    {
    std::cout <<line51<< std::endl;
    std::cout <<line52<< std::endl;
    std::cout <<line53<< std::endl;
    std::cout <<line54<< std::endl;
    std::cout <<line55<< std::endl;
    std::cout <<line56<< std::endl;
    std::cout <<line57<< std::endl;
    logoline = line50;
    }
    if(arg==6)
    {
    std::cout <<line61<< std::endl;
    std::cout <<line62<< std::endl;
    std::cout <<line63<< std::endl;
    std::cout <<line64<< std::endl;
    std::cout <<line65<< std::endl;
    std::cout <<line66<< std::endl;
    std::cout <<line67<< std::endl;
    std::cout <<line68<< std::endl;
    logoline = line60;
    }
    if(arg==7)
    {
    std::cout <<line71<< std::endl;
    std::cout <<line72<< std::endl;
    std::cout <<line73<< std::endl;
    std::cout <<line74<< std::endl;
    std::cout <<line75<< std::endl;
    std::cout <<line76<< std::endl;
    std::cout <<line77<< std::endl;
    logoline = line70;
    }

    if(arg==8)
    {
    std::cout <<line81<< std::endl;
    std::cout <<line82<< std::endl;
    std::cout <<line83<< std::endl;
    std::cout <<line84<< std::endl;
    std::cout <<line85<< std::endl;
    std::cout <<line86<< std::endl;
    logoline = line80;
    }

    if(arg==9)
    {
    std::cout <<line91<< std::endl;
    std::cout <<line92<< std::endl;
    std::cout <<line93<< std::endl;
    std::cout <<line94<< std::endl;
    std::cout <<line95<< std::endl;
    std::cout <<line96<< std::endl;
    std::cout <<line97<< std::endl;
    logoline = line90;
    }

    system("color 9f");
}

std::string logo::getline(void)
{
    return logoline;
}

logo::~logo()
{
    //dtor
}

