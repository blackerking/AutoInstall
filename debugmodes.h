#ifndef DEBUGMODES_H
#define DEBUGMODES_H


class debugmodes
{
    public:
        debugmodes();
        virtual ~debugmodes();
        void setdebug(bool);
        bool isdebug(void);
        void triggerdebug(void);
        static bool booldebug;
    protected:
    private:

};

#endif // DEBUGMODES_H
