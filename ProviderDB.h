#ifndef PROVIDERDB_H
#define PROVIDERDB_H
#include "Provider.h"

//*****************************************************************
// FILE:      ProviderDB.h
// AUTHOR:    Mollie Gerber
// LOGON ID:  z1816352
// DUE DATE:  due date of assignment
//
// PURPOSE:   Declaration for the ProviderDB class, which represents
//            information about a health care provider.
//*****************************************************************

class ProviderDB
{

   // creates a default constructor, alternate constructor and print function
    public:
    
    ProviderDB();
    
    ProviderDB(const char* fileName);
    
    void print() const;

    void sortByProviderNumber();
    
    void sortBySpecialty();
    
    void sortByName();

    
    //declares provider array for input file and number of providers
    private:
    
    Provider providerArray[40];
    
    int numProviders;
    
};

#endif

