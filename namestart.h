#ifndef NAMESTART_H_INCLUDED
#define NAMESTART_H_INCLUDED


/**Update Liste**/

#define sua winpkg
using namespace std;

/** Programme **/
string prg 		  = {"Software"};

/* Adobe Reader */

string prg01name  = {"Adobe Reader"};
string prg01datei = {"areader.exe"};
string prg01start = {"/sPB /rs"};
int  prg01txttabs = {2};

/*Mozilla Firefox */

string prg02name  = {"Mozilla Firefox"};
string prg02datei = {"firefox.exe"};
string prg02start = {"/S"};
int  prg02txttabs = {2};

/*CD-Burner XP */

string prg04name  = {"CD Burner XP"};
string prg04datei = {"cdburnerxp.exe"};
string prg04start = {"/VERYSILENT /LOADINF=default.cfg"};
int  prg04txttabs = {2};

/*Thunderbird*/

string prg05name  = {"Thunderbird"};
string prg05datei = {"thunderbird.exe"};
string prg05start = {"/S"};
int  prg05txttabs = {2};

/*Thunderbird*/

string prg06name  = {"Paint.Net"};
string prg06datei = {"paint.net.install.exe"};
string prg06start = {"/auto"};
int  prg06txttabs = {2};

/*IT Taucha */

string prg08name  = {"IT-s Fernwartung"};
string prg08datei = {"ittaucha.exe"};
string prg08start = {"/S"};
int  prg08txttabs = {1};

/* 7-ZIP */

string prg09name  = {"7-ZIP"};
string prg09datei = {"7zip.exe"};
string prg09start = {"/S"};
int  prg09txttabs = {3};

/* VLC-Player */

string prg10name  = {"VLC-Player"};
string prg10datei = {"vlcinstall.exe"};
string prg10start = {"/S"};
int  prg10txttabs = {2};

/* ClassicShell */

string prg11name  = {"ClassicShell"};
string prg11datei = {"classicshell.exe"};
string prg11start = {"/qn ADDLOCAL=ClassicStartMenu"};
int  prg11txttabs = {2};

/* Libre Office */

string prg12name  = {"Libre Office"};
string prg12datei = {"libreoffice.msi"};
string prg12start = {"/quiet"};
int  prg12txttabs = {2};

/* Google Chrome */

string prg13name  = {"Google Chrome"};
string prg13datei = {"chrome.msi"};
string prg13start = {"/quiet"};
int  prg13txttabs = {2};

/* PDFCreator */

string prg14name  = {"PDFCreator"};
string prg14datei = {"pdfcreator.exe"};
string prg14start = {"/ForceInstall /VERYSILENT /LANG=English /COMPONENTS=""program,ghostscript"" /NORESTART"};
int  prg14txttabs = {2};

/* Driverbooster */

string prg16name  = {"Driver Booster"};
string prg16datei = {"driver_booster.exe"};
string prg16start = {"/sp- /verysilent /suppressmsgboxes driverbooster"};
int  prg16txttabs = {2};


/** Microsoft Office Versionen **/
string mo         = {"Microsoft Office Version"};
string mopfad     = {"msoffice\\"};
bool mo03install, mo07install, mo10hsinstall, mo10hbinstall, mo10pinstall = {false};

string mo03name   = {"MS Office 2003"};
string mo03datei  = {""};
string mo03start  = {""};

string mo07name   = {"MS Office 2007"};
string mo07datei  = {""};
string mo07start  = {""};

string mo10hsname = {"MS Office 2010 Home & Student"};
string mo10hsdatei= {""};
string mo10hsstart= {""};

string mo10hbname = {"MS Office 2010 Home & Business"};
string mo10hbdatei= {""};
string mo10hbstart= {""};

string mo10pname  = {"MS Office 2010 Professional"};
string mo13hsname = {"MS Office 2013 Home & Student"};
string mo13hbname = {"MS Office 2013 Home & Business"};
string mo13hbretname = {"MS Office 2013 Home & Business - Retail"};
string mo13pname  = {"MS Office 2013 Professional"};
string mo16hsname = {"MS Office 2016 Home & Student"};
string mo16hbname = {"MS Office 2016 Home & Business"};
string mo16pname  = {"MS Office 2016 Professional"};
string mo365hname = {"MS Office 365 Home"};
string mo365pname = {"MS Office 365 Personal"};
string modatei    = {"8372 9hf923h 9h3"};
string mo13start  = {"system\\"};
// https://technet.microsoft.com/de-de/library/dd630736.aspx - MO13 Install tricks
// https://flowest.blogspot.de/2015/10/office-2016-deployment-silent.html  - MO16 Install tricks

/** Virenscanner **/
string vir        = {"Virenscanner"};
string virpfad    = {"Andere\\Virenscanner\\"};

/*Kaspersky Internet Security */
string vir01name  = {"Kaspersky Internet Security"};
string vir01datei = {virpfad + "kisde-de.exe"};
string vir01start = {""};
bool vir01install = {false};
int  vir01txttabs = {1};
/*LINK: http://www.kaspersky.com/de/downloads/internet-security */

/*Avira AntiVir Free */
string vir02name  = {"Avira Antivir"};
string vir02datei = {virpfad + "avira_antivirus_de-de.exe"};
string vir02start = {""};
bool vir02install = {false};
int  vir02txttabs = {2};
/*LINK: --------------------------- */

/*Microsoft Security Essentials X86 */
string vir03name  = {"Microsoft Security Essentials X86"};
string vir03datei = {virpfad + "msex86.exe"};
string vir03start = {"/s /runwgacheck"};
bool vir03install = {false};
int  vir03txttabs = {1};
/*LINK: --------------------------- */

/*Microsoft Security Essentials X64 */
string vir04name  = {"Microsoft Security Essentials X64"};
string vir04datei = {virpfad + "msex64.exe"};
string vir04start = {"/s /runwgacheck"};
bool vir04install = {false};
int  vir04txttabs = {1};
/*LINK: --------------------------- */

/**System Updates**/
string supfad   = {"system\\"};

/* WinPKG */
string suaname  = {"WinPKG"};
string suadatei = {supfad + "WinPKG.exe"};
string suastart = {""};
bool suainstall = {false};
int suatxttabs = {2};

/* XNA Framework */

string subname  = {"XNA Framework"};
string subdatei = {supfad + "xnafx40_redist.msi"};
string substart = {"/quiet"};
bool subinstall = {false};
int  subtxttabs = {2};

/* Powershell */
/** Win7x86**/

string sucname  = {"Powershell"};
string sucdatei = {supfad + "Win7-KB3191566-x86.msu"};
string sucstart = {"/quiet /norestart"};
bool sucinstall = {false};
int  suctxttabs = {2};

/** Win7x64**/

string sudname  = {"Powershell"};
string suddatei = {supfad + "Win7AndW2K8R2-KB3191566-x64.msu"};
string sudstart = {"/quiet /norestart"};
bool sudinstall = {false};
int  sudtxttabs = {2};

/** Win8x86**/

string suename  = {"Powershell"};
string suedatei = {supfad + "Win81-KB3191564-x86.msu"};
string suestart = {"/quiet /norestart"};
bool sueinstall = {false};
int  suetxttabs = {2};

/** Win8x64**/

string sufname  = {"Powershell"};
string sufdatei = {supfad + "Win81AndW2K12R2-KB3191564-x64.msu"};
string sufstart = {"/quiet /norestart"};
bool sufinstall = {false};
int  suftxttabs = {2};

/* Windows 10 FALL Update */
string suxxname  = {"Windows 10 Fall Upgrade"};
string suxxdatei = {supfad + "Windows10Upgrade28096.exe"};
string suxxstart = {""};
bool suxxinstall = {false};
int  suxxtxttabs = {2};
#endif // NAMESTART_H_INCLUDED
