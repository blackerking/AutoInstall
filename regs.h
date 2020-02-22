#ifndef REGS_H_INCLUDED
#define REGS_H_INCLUDED

/**Standard Texte**/
std::string erledigt = "Vorgang abgeschlossen";


/**Registry Updates**/
std::string regexe  = "regedit /S ";
std::string regpfad = "registry\\";

std::string reganame  = "Desktop Icons anzeigen";
std::string regadatei = regexe + regpfad + "desktopicons.reg";

std::string regbname  = "Windows 10 - bei Hintergrundbildern hoehere Qualitaet verwenden";
std::string regbdatei = regexe + regpfad + "win10bild.reg";
/*
std::string regcname  = "IT-Taucha Branding";
std::string regcdatei = regexe + regpfad + "ittaucha.reg";
*/
std::string rega1beschr  = "Desktop Icons anzeigen";
std::string rega1pfad    = "HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\ClassicStartMenu";
std::string rega2pfad    = "HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel";
std::string rega1art     = "REG_DWORD";
std::string rega1wert    = "00000000";
std::string rega1name    = "{59031a47-3f72-44a7-89c5-5595fe6b30ee}";
std::string rega2name    = "{20D04FE0-3AEA-1069-A2D8-08002B30309D}";
std::string rega3name    = "{645FF040-5081-101B-9F08-00AA002F954E}";
std::string rega4name    = "{F02C1A0D-BE21-4350-88B0-7367FC96EF3C}";
std::string rega5name    = "{5399E694-6CE5-4D6C-8FCE-1D8870FDCBA0}";
int regaanzahl      = 10;

std::string regb1beschr  = "Windows 10 Hintergrundbilder optimieren";
std::string regb1pfad    = "HKCU\\Control Panel\\Desktop";
std::string regb1art     = "REG_DWORD";
std::string regb1wert    = "00000100";
std::string regb1name    = "{JPEGImportQualityeg}";
int regbanzahl      = 1;

std::string regd1beschr  = "Details bei Bluescreen";
std::string regd1pfad    = "HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
std::string regd1art     = "REG_DWORD";
std::string regd1name    = "VerboseStatus";
std::string regd1wert    = "1";
int regdanzahl      = 2;

std::string rege1beschr  = "Neustart bei Bluescreen deaktivieren";
std::string rege1pfad    = "HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\CrashControl";
std::string rege1art     = "REG_DWORD";
std::string rege1name    = "AutoReboot";
std::string rege1wert    = "0";
int regeanzahl      = 2;

std::string regf1beschr  = "Datei-Explorer oeffnen fuer: \"Dieser PC\"";
std::string regf1pfad    = "HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced";
std::string regf1art     = "REG_DWORD";
std::string regf1name    = "LaunchTo";
std::string regf1wert    = "1";
int regfanzahl      = 3;

std::string regg1beschr  = "Suche in Taskbar verbergen";
std::string regg1pfad    = "HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Search";
std::string regg1art     = "REG_DWORD";
std::string regg1name    = "SearchboxTaskbarMode";
std::string regg1wert    = "0";
int regganzahl      = 1;
//kontakteausblenden
std::string regh1beschr  = "Alle Symbole in Taskleiste anzeigen";
std::string regh1pfad    = "HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer";
std::string regh1art     = "REG_DWORD";
std::string regh1name    = "EnableAutoTray";
std::string regh1wert    = "0";
int reghanzahl      = 2;

/* Testbereich */

std::string regi1beschr  = "Geringe Benutzerkonten Abfrage Windows 10";
std::string regi1pfad    = "HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
std::string regi1art     = "REG_DWORD";
std::string regi1name    = "ConsentPromptBehaviorAdmin";
std::string regi1wert    = "5";
int regianzahl      = 1;

std::string regj1beschr  = "Cortana Websuche deaktivieren";
std::string regj1pfad    = "HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\Windows Search";
std::string regj1art     = "REG_DWORD";
std::string regj1name    = "AllowCortana";
std::string regj1wert    = "0";
int regjanzahl      = 1;

/* OOSHUTUP */

std::string prg15name  = "O&O ShutUP";
std::string prg15datei = "shutup\\OOSU10.exe";
std::string prg15start = "";
int prg15txttabs  = 2;

std::string powerline1 = "POWERCFG /Change -monitor-timeout-ac 0";
std::string powerline2 = "POWERCFG /Change -monitor-timeout-dc 0";
std::string powerline3 = "POWERCFG /Change -disk-timeout-ac 0";
std::string powerline4 = "POWERCFG /Change -disk-timeout-dc 0";
std::string powerline5 = "POWERCFG /Change -standby-timeout-ac 0";
std::string powerline6 = "POWERCFG /Change -hibernate-timeout-dc 0";
std::string powerline7 = "POWERCFG /Change -hibernate-timeout-ac 0";

/* Netframework Befehle */

std::string framework = ".NET Framework 3.5 installieren";
std::string netframework = "\%windir\%\\sysnative\\DISM.exe /Online /Enable-Feature /FeatureName:NetFx3 /All /LimitAccess";

/* Apps nicht updaten*/
std::string noappuptxt = "Automatische APP-Updates verhindern\n";
std::string noappup    = "REG DELETE HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager /f";

/* PC Reinigung starten */
std::string PCReinigungtxt  = "\nPC Reinigung wird gestartet...\n";
std::string PCReinigung     = "Cleanmgr";

/* Windows 10 - PUP Erkennung aktivieren */
std::string pup10txt  = "\nPotentielle unerwuenschte Software erkennen(Windows10)...\n";
std::string pup10     = "Set-MpPreference -PUAProtection 1";

/* Windows 10 - Netzwerkschutz aktivieren */
std::string nwschutz10txt        = "\nNetzwerk Schutz aktivieren (Windows10)...\n";
std::string nwschutz10befehl     = "Set-MpPreference -EnableNetworkProtection enabled";

/* Windows 10 - Kontakte ausblenden */
std::string regl1beschr  = "Kontakte ausblenden (Windows10)...\n";
std::string regl1pfad    = "HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\People";
std::string regl1art     = "REG_DWORD";
std::string regl1name    = "PeopleBand";
std::string regl1wert    = "0";
int reglanzahl      = 1;

/* Windows 7 oder 8 - PUP Erkennung aktivieren */
std::string regk1beschr  = "Potentielle unerwuenschte Software erkennen(Windows 7 oder 8)\n";
std::string regk1pfad    = "HKEY_LOCAL_MACHINE\\Software\\Policies\\Microsoft\\Windows Defender\\MpEngine";
std::string regk1art     = "REG_DWORD";
std::string regk1name    = "MpEnablePus";
std::string regk1wert    = "1";
int regkanzahl      = 1;

/* Windows 10 - Schutz und Systemwiederherstellung aktivieren */
std::string schutz10atxt        =    "Windows Schutzfunktion aktivieren";
std::string schutz10abefehl     =    "wmic /namespace:\\\\root\\default path SystemRestore call Enable C:\\";
std::string schutz10btxt        =    "Windows Systemwiederherstellung für C: aktivieren";
std::string schutz10bbefehl     =    "Enable-ComputerRestore C:";

/* Windows 10 - Taskansicht-ICON ausblenden */
std::string regm1beschr  = "Taskansicht-ICON ausblenden (Windows10)...\n";
std::string regm1pfad    = "HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced";
std::string regm1art     = "REG_DWORD";
std::string regm1name    = "ShowTaskViewButton";
std::string regm1wert    = "0";
int regmanzahl      = 1;

#endif // REGS_H_INCLUDED
