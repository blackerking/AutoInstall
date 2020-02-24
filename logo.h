#ifndef LOGO_H
#define LOGO_H
#include <iostream>
#include <chrono>
#include <random>
class logo
{
    public:
        printlogo(void);
        std::string getline(void);
        virtual ~logo();
    protected:
    private:
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::string line11 = "          _    _ _______ ____ _____ _   _  _____ _______       _      _      ";
        std::string line12 = "     /\\  | |  | |__   __/ __ \\_   _| \\ | |/ ____|__   __|/\\   | |    | |     ";
        std::string line13 = "    /  \\ | |  | |  | | | |  | || | |  \\| | (___    | |  /  \\  | |    | |     ";
        std::string line14 = "   / /\\ \\| |  | |  | | | |  | || | | . ` |\\___ \\   | | / /\\ \\ | |    | |     ";
        std::string line15 = "  / ____ \\ |__| |  | | | |__| || |_| |\\  |____) |  | |/ ____ \\| |____| |____";
        std::string line16 = " /_/    \\_\\____/   |_|  \\____/_____|_| \\_|_____/   |_/_/    \\_\\______|______|";
        std::string logoline, line10 = "----------------------------------------------------------------------------\n";
        //********************************************************************//
        std::string line21 = "   _         _____  ___ _____    __  __  _____  _      __    __  ";
        std::string line22 = "  /_\\  /\\ /\\/__   \\/___\\\\_   \\/\\ \\ \\/ _\\/__   \\/_\\    / /   / /  ";
        std::string line23 = " //_\\\\/ / \\ \\ / /\\//  // / /\\/  \\/ /\\ \\   / /\\//_\\\\  / /   / /   ";
        std::string line24 = "/  _  \\ \\_/ // / / \\_//\\/ /_/ /\\  / _\\ \\ / / /  _  \\/ /___/ /___ ";
        std::string line25 = "\\_/ \\_/\\___/ \\/  \\___/\\____/\\_\\ \\/  \\__/ \\/  \\_/ \\_/\\____/\\____/ ";
        std::string line20 = "----------------------------------------------------------------\n";

};

#endif // LOGO_H
