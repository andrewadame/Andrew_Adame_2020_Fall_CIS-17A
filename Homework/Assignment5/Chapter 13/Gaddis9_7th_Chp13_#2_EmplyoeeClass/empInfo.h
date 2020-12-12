#ifndef empInfo_h
#define empInfo_h

#include <iostream>
#include <string>

using namespace std;

class EMP
{
private:
    string NAM;
    int NUM;
    string DEP;
    string POS;

public:
    //1ST CONSTRUCTOR
    EMP(string n, int id, string d, string p)
    {
        NAM = n;
        NUM = id;
        DEP = d;
        POS = p;
    }

    //2ND CONSTRUCTOR
    EMP(string n, int id)
    {
        NAM = n;
        NUM = id;
        DEP = "";
        POS = "";
    }

    //DEFAULT CONSTRUCTOR
    EMP()
    {
        NAM = "";
        NUM = 0;
        DEP = "";
        POS = "";
    }

    //GETTER FUNCTIONS
    string getName() const
    {
        return NAM;
    }

    int getID() const
    {
        return NUM;
    }

    string getDep() const
    {
        return DEP;
    }

    string getPos() const
    {
        return POS;
    }

    //SETTER FUNCTIONS
    void setName(string n)
    {
        NAM = n;
    }

    void setID(int id)
    {
        NUM = id;
    }

    void setDep(string d)
    {
         DEP = d;
    }

    void setPos(string p)
    {
        POS = p;
    }
};

#endif