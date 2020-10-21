#include "action.h"

action::action(int arg,std::string argstr)
{
    bit=arg;
    line = argstr;
}

action::action(int arg)
{
    bit=arg;
}


action::~action()
{
    //dtor
}


void action::win7(void)                     //Windows 7 Befehel ausführen
{
    std::cout << line << "Windows 7 Registry Tweaks\n" << line << std::endl;
    settime();
    deskicons();
    bluescreens();
    energieset();
    tasksymbole();
    pup78();
    muellbeseitung();
}

void action::win8(void)                     //Windows 8 Befehl ausführen
{
    std::cout << line << "Windows 8.1 Registry Tweaks\n" << line << std::endl;
    settime();
    deskicons();
    bluescreens();
    powershellhelpupdate();
    energieset();
    tasksymbole();
    muellbeseitung();

    kickapps();
    pup78();
}

void action::win10(void)                    //Windows 10 Befehl ausführen
{
    std::cout << line << "Windows 10 Registry Tweaks\n" << line << std::endl;
    programm reg;
    programm prg15;
    settime();
    deskicons();
    bluescreens();
    {
        //Werte für Anzahl müssen noch angepasst werden.
        reg.reginstall(regb1beschr,regb1name,regb1pfad,regb1art,regb1wert,regbanzahl);
        reg.reginstall(regf1beschr,regf1name,regf1pfad,regf1art,regf1wert,regfanzahl);
        reg.reginstall(regg1beschr,regg1name,regg1pfad,regg1art,regg1wert,regganzahl);

        /**Cortana stoppen
        reg.reginstall(regj1beschr,regj1name,regj1pfad,regj1art,regj1wert,regjanzahl);
        **/
    }
    kickapps();
    tasksymbole();
    safescreen10();
    stopoldsmb();
    powershellhelpupdate();
    energieset();
    actpup10();
    nwschutz10();
    xpsviewerinstall();
    kontakteausblenden();
    schutzaktiv10();
    taskansichticon();
    muellbeseitung();
    pcname();
    std::cout << "OO ShutUP wird gestartet..." << std::endl;
    prg15.installprog(prg15name, prg15datei, prg15start, prg15txttabs);

}

void action::bluescreens(void)
{
    programm reg;
    reg.reginstall(regd1beschr,regd1name,regd1pfad,regd1art,regd1wert,regdanzahl);
    reg.reginstall(rege1beschr,rege1name,rege1pfad,rege1art,rege1wert,regeanzahl);
}

void action::pcname(void)
{
    std::cout << "Soll der PC-Name geaendert werden?\n" << std::endl;
    if(safecinbooltrue()==true)
    {
        std::cout <<line << line << "Wie soll der PC-Name lauten?\n" << line << line << std::endl;
        std::string pcname;
        std::cin >> pcname;

        std::string befehl = "wmic computersystem where name='%computername%' call rename name='" + pcname + "'";
        system(befehl.c_str());
        std::cout << "\nDer neue Computername lautet: >> " << pcname << " <<\n";
    }
}

void action::tasksymbole(void)
{
    programm reg;
    reg.reginstall(regh1beschr,regh1name,regh1pfad,regh1art,regh1wert,reghanzahl);
}

void action::safescreen10(void)
{
    programm reg;
    reg.reginstall(regi1beschr,regi1name,regi1pfad,regi1art,regi1wert,regianzahl);
}

void action::deskicons(void)
{
    programm reg;
    reg.reginstall(rega1beschr,rega1name,rega1pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega2name,rega1pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega3name,rega1pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega4name,rega1pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega5name,rega1pfad,rega1art,rega1wert,regaanzahl);

    reg.reginstall(rega1beschr,rega1name,rega2pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega2name,rega2pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega3name,rega2pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega4name,rega2pfad,rega1art,rega1wert,regaanzahl);
    reg.reginstall(rega1beschr,rega5name,rega2pfad,rega1art,rega1wert,regaanzahl);
}

void action::muellbeseitung(void)
{
    std::cout << PCReinigungtxt;
    system(PCReinigung.c_str());
}


void action::energieset(void)
{
    std::cout << line << "Energieoptionen einstellen\n" << line << std::endl;
    system(powerline1.c_str());
    system(powerline2.c_str());
    system(powerline3.c_str());
    system(powerline4.c_str());
    system(powerline5.c_str());
    system(powerline6.c_str());
    system(powerline7.c_str());
    std::cout << erledigt << std::endl;
}

void action::powershell(std::string argv)
{
    std::string befehl = "Powershell.exe -Command \"" + argv + "\"";
    system(befehl.c_str());
}

void action::powershell_file(std::string argv)
{
    std::string befehl = "Powershell.exe -executionpolicy remotesigned -File" + argv;
    system(befehl.c_str());

}

void action::kickapps(void)
{
    std::cout << "Unerwuenschte Apps deinstallieren...";
    //powershell("Get-AppxPackage -allUsers *OneNote* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *CandyCrush* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *FarmVille2* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *Twitter* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *DrawboardPDF* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *TuneInRadio* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *xing* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *facebook* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *dolby* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *BubbleWitch3Saga* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *Minecraft* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *Autodesk* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *MarchofEmpires* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *PhototasticCollage* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *FitbitCoach* | Remove-AppxPackage");
    //powershell("Get-AppxPackage -allUsers *Skype* | Remove-AppxPackage");
    powershell("Get-AppxPackage -allUsers *dvertising* | Remove-AppxPackage");
    std::cout << erledigt << std::endl;
}

void action::zipreg(void)
{
    std::cout << "7-ZIP" << " Dateiverknuepfungen werden integriert...";
    powershell("regedit /s \\x32\\7zipregs.reg");
    system("\%programfiles\%\\7-Zip\\7zFM.exe");
    std::cout << erledigt << std::endl;
}

void action::killdriverboosterapp(void)
{

    std::cout << "Driverbooster" << " wird beendet...";
    system("timeout /T 5 /nobreak");
    powershell("stop-process -name DriverBooster");
    std::cout << erledigt << std::endl;
}

void action::stopoldsmb(void)
{
    std::cout << "Alte SMB Verbindungen blockieren...";
    powershell("Set-SmbServerConfiguration -EnableSMB1Protocol $false -Force ");
    powershell("Disable-WindowsOptionalFeature -Online -FeatureName smb1protocol -norestart");
    std::cout << erledigt << std::endl;
}

void action::powershellhelpupdate(void)
{
    std::cout << "Powershell Hilfe aktualisieren...";
    powershell("Update-Help");
    std::cout << erledigt << std::endl;
}

void action::settime(void)
{
    std::cout << "Zeit wird Synchronisiert..." << std::endl;
    system("w32tm /config /syncfromflags:manual /manualpeerlist:\"0.pool.ntp.org\"");
    system("net start w32time");
    system("w32tm /resync /nowait");
    std::cout << erledigt << std::endl;
}

void action::actpup10(void)
{
    std::cout << pup10txt;
    powershell(pup10);
    std::cout << erledigt << std::endl;
}

void action::nwschutz10(void)
{
    std::cout << nwschutz10txt;
    powershell(nwschutz10befehl);
    std::cout << erledigt << std::endl;
}

void action::kontakteausblenden(void)
{
    programm reg;
    reg.reginstall(regl1beschr,regl1name,regl1pfad,regl1art,regl1wert,reglanzahl);
    std::cout << erledigt << std::endl;
}

void action::pup78(void)
{
    programm reg;
    reg.reginstall(regk1beschr,regk1name,regk1pfad,regk1art,regk1wert,regkanzahl);
    std::cout << erledigt << std::endl;
}

void action::schutzaktiv10(void)
{
    std::cout << schutz10atxt << std::endl;
    system(schutz10abefehl.c_str());
    std::cout << schutz10btxt << std::endl;
    powershell(schutz10bbefehl);
    std::cout << erledigt << std::endl;
}

void action::taskansichticon(void)
{
    programm reg;
    reg.reginstall(regm1beschr,regm1name,regm1pfad,regm1art,regm1wert,reglanzahl);
    std::cout << erledigt << std::endl;
}

void action::xpsviewerinstall(void)
{
    powershell("Add-WindowsCapability -Online -Name \"XPS.Viewer*\"");
}
