#include "ProviderDB.h"

int main()
{
    
    //print ProviderDB
    ProviderDB opener("providerdb");
    opener.print();
    
    ProviderDB sortByProviderNumber;
    sortByProviderNumber.print();
    
    ProviderDB sortBySpecialty;
    sortBySpecialty.print();
    
    ProviderDB sortByName;
    sortByName.print();

    return 0;
}

