#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED

#include <iostream>
#include "safecin.h"
#include "debugmodes.h"
#include "programm.h"
#include "regs.h"

class action
{

    public:
        action(int,std::string);
        action(int);
        virtual ~action();
        void win7(void);
        void win8(void);
        void win10(void);
        void powershell(std::string);
        void powershell_file(std::string);
        void zipreg(void);
        void killdriverboosterapp(void);
    protected:
    private:
        void bluescreens(void);
        void pcname(void);
        void tasksymbole(void);
        void deskicons(void);
        void muellbeseitung(void);
        //void brand(void);
        void energieset(void);
        void safescreen10(void);
        void aappins(void);
        std::string line;
        int bit=0;
        void kickapps(void);
        void stopoldsmb(void);
        void powershellhelpupdate(void);
        void settime(void);
        void actpup10(void);
        void pup78(void);
        void nwschutz10(void);
        void kontakteausblenden(void);
        void schutzaktiv10(void);
        void taskansichticon(void);
        void xpsviewerinstall(void);
};

#endif // ACTION_H
