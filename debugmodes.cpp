#include "debugmodes.h"

debugmodes::debugmodes()
{
    //ctor
}

debugmodes::~debugmodes()
{
    //dtor
}

void debugmodes::setdebug(bool arg)
{
    booldebug = arg;
}

bool debugmodes::isdebug(void)
{
    return booldebug;
}

void debugmodes::triggerdebug(void)
{
    booldebug = !booldebug;
}
bool debugmodes::booldebug = false;
