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

